#include <cstdio>

using namespace std;

int a,b,c,root;
int check[2000010]={1,1};


void sieve()
{
    for(int i=2;i<=1414;i++)
    {
        if(check[i]) continue;
        for(int j=i*2;j<=2000000;j+=i)
        {
            check[j]=1;
        }
    }
}
void output()
{
    int sum=0;
    int temp=-1;
    for(int i=a;i<=b;i++)
    {
        if(check[i]==0)
        {
            if(sum==0) temp=i;
            sum=sum+i;
        }
    }
    if(temp==-1) printf("-1");
    else printf("%d\n%d",sum,temp);
}

int main()
{
    scanf("%d%d",&a,&b);
    sieve();
    output();
}
