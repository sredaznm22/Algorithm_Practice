#include <cstdio>
#include <cmath>

using namespace std;

int num,arr[8],sum=0,pl,ch[8];

void find()
{
    for(int i=0;i<8;i++)
    {
        int temp;
        temp=num%10;
        if(i!=0)
            sum=sum+arr[i]*pow(2,6-i);
        else if (i==0) pl=temp;
        num=num/10;
    }
}

int main()
{
    scanf("%c",ch);
    for(int i=0;i<8;i++) arr[i]=ch[i]-'0';
    puts("");
    for(int j=0;j<8;j++) arr[j];
    //find();
    if(pl==1) sum=sum*-1;
    printf("%d",sum);
}
