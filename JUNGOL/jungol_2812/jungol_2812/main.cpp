#include <cstdio>

using namespace std;

long long num;
int sum;

void get()
{
    sum=0;
    long long val=num;
    while(val>0)
    {
        sum=sum+(val%10);
        val=val/10;
    }
    
    printf("%d",sum);
    puts("");
    
    
    if(sum>=10)
    {
        num=sum;
        get();
    }
}

int main()
{
    scanf("%lld",&num);
    get();
    return(0);
}
