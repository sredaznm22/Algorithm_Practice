#include <cstdio>

using namespace std;
int a,b,c;
int arr[10];
int co[10]={0};

void print()
{
    for(int temp=0;temp<10;temp++) printf("%d\n",co[temp]);
}

void find1()
{
    int value=a*b*c;
    while(value>0)
    {
        co[value%10]++;
        value=value/10;
    }
    print();
}

int main()
{
    scanf("%d%d%d",&a,&b,&c);
    find1();
}
