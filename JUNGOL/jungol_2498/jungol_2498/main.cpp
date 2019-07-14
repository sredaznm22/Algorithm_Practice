#include <cstdio>
#include <cmath>

using namespace std;

int num1,num2,val1=__INT_MAX__,val2=0;

void find()
{
    int a=num2/num1;
    int temp;
    int b=sqrt(a);
    for(temp=1;temp<=b;temp++)
    {
        if(a%temp==0)
        {
            int temp1=a/temp;
            int gcd=1;
            for(int temp2=1;temp2<temp;temp2++)
            {
                if(temp%temp2==0&&temp1%temp2==0) gcd=temp2;
            }
            
            if(gcd==1)
            {
                val1=temp;
                val2=temp1;
            }
        }
    }
    printf("%d %d",val1*num1,val2*num1);
}

int main()
{
    scanf("%d%d",&num1,&num2);
    find();
}

/*(for(int temp2=1;temp2<temp;temp2++)
 {
 if(temp%temp2==0&&temp1%temp2==0) gcd=temp2;
 }
 
 if(gcd==1)
 {
 val1=temp;
 val2=temp1;
 printf("%d %d\n",val1,val2);
 }*/
