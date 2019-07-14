#include <cstdio>

using namespace std;

int a,b,arr[4],bsplit[3];

void print()
{
    for(int temp=0;temp<4;temp++) printf("%d\n",arr[temp]);
}

void calculate()
{
    arr[0]=a*bsplit[0];
    arr[1]=a*bsplit[1];
    arr[2]=a*bsplit[2];
    arr[3]=a*b;
    print();
}

void split()
{
    int c=b;
    for(int temp=0;temp<4;temp++)
    {
        bsplit[temp]=c%10;
        c=c/10;
    }
    calculate();
}

int main()
{
    scanf("%d%d",&a,&b);
    split();
    return(0);
}
