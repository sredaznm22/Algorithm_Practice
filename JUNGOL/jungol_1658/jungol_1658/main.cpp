#include <cstdio>

using namespace std;

int a,b;

void lcm()
{
    int lcm;
    if(a>b) lcm=b;
    else lcm=a;
    
    while(1)
    {
        if(lcm%a==0&&lcm%b==0)
        {
            printf("%d",lcm);
            break;
        }
        lcm++;
    }
}

void gcd()
{
    int gcd;
    for(int c=1;c<=a;c++)
    {
        if(a%c==0&&b%c==0) gcd=c;
    }
    printf("%d",gcd);
}

int main()
{
    scanf("%d%d",&a,&b);
    gcd();
    puts("");
    lcm();
}

