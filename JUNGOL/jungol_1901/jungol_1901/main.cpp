#include <cstdio>

using namespace std;

int num;

bool isPrime(int n){
    if(n < 2||n>1000000) return false;
    for (int i=2;  i <= n / i ; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void print(int value)
{
    if(isPrime(value))
    {
        printf("%d\n",value);
        return;
    }
    int rec=0;
    for(int i=0;i<10000000;i++)
    {
        if(isPrime(value-i))
        {
            printf("%d ",value-i);
            rec++;
        }
        if(isPrime(value+i))
        {
            printf("%d ",value+i);
            rec++;
        }
        if(rec>0)
        {
            puts("");
            return;
        }
    }
}

int main()
{
    int temp,temp2;
    scanf("%d",&num);
    for(temp=0;temp<num;temp++)
    {
        scanf("%d",&temp2);
        print(temp2);
    }
}
