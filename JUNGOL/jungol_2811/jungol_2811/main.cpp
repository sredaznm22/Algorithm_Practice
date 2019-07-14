#include <cstdio>
#include <cmath>

using namespace std;

int num;

void print(int det)
{
    if(det==1) printf("number one\n");
    else if(det==2) printf("prime number\n");
    else printf("composite number\n");
}

void find()
{
    if(num==1) print(1);
    else
    {
        int temp;
        int root=floor(sqrt(num));
        bool prime=true;
        for(temp=2;temp<=root;temp++)
        {
            if(num%temp==0)
            {
                print(3);
                prime=false;
                break;
            }
        }
        if(prime==true) print(2);
    }
}

int main()
{
    for(int a=0;a<5;a++)
    {
        scanf("%d",&num);
        find();
    }
    return(0);
}
