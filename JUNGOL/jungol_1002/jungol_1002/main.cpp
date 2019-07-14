#include <cstdio>

using namespace std;

int n,arr[10],gcd,lcm;

void gcdfind(int current,int newnum,int count)
{
    int num=count;
    int count2=1;
    int temp;
    bool repeat=true;
    while(repeat)
    {
        int check=0;
        for(temp=0;temp<n;temp++)
        {
            if(arr[temp]%count2==0) check++;
        }
        
        if(check==n) gcd=count2;
        count2++;
        for(temp=0;temp<n;temp++)
        {
            if(count2>arr[temp]) repeat=false;
        }
    }
    printf("%d ",gcd);
}

void lcmfind(int a,int b,int count)
{
    int temp;
    if(a>b)
    {
        int c=a;
        int a=b;
        int b=c;
    }
    for(temp=a;temp<=a*b;temp++)
    {
        if(temp%a==0&&temp%b==0)
        {
            lcm=temp;
            break;
        }
    }
    if(count!=n)
    {
        lcmfind(lcm,arr[count+1],count+1);
    }
    else printf("%d",lcm);
}

int main()
{
    scanf("%d",&n);
    int temp;
    for(temp=0;temp<n;temp++) scanf("%d",&arr[temp]);
    gcdfind(arr[0],arr[1],1);
    lcmfind(arr[0],arr[1],1);
    return(0);
}
