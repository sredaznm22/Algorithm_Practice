#include <cstdio>
#include <algorithm>

int arr[40],a,m,di[40],mul[40],cnt1=0,cnt2=0,sum1=0;
int sum2=0;

void sum()
{
    int temp;
    for(temp=0;temp<cnt1;temp++) sum1=sum1+di[temp];
    printf("%d\n",sum1);
    for(temp=0;temp<cnt2;temp++) sum2=sum2+mul[temp];
    printf("%d",sum2);
}

void find()
{
    int temp1;
    std::sort(arr,arr+a);
    for(temp1=0;temp1<40;temp1++)
    {
        
        if(arr[temp1]==0) break;
        else if(arr[temp1]<m)
        {
            if(m%arr[temp1]==0)
            {
                di[cnt1]=arr[temp1];
                cnt1++;
            }
        }
        else if(arr[temp1]==m)
        {
            di[cnt1]=arr[temp1];
            cnt1++;
            mul[cnt2]=arr[temp1];
            cnt2++;
        }
        else
        {
            if(arr[temp1]%m==0)
            {
                mul[cnt2]=arr[temp1];
                cnt2++;
            }
        }
    }
    
    sum();
}

int main()
{
    int temp;
    scanf("%d",&a);
    for(temp=0;temp<a;temp++)
        scanf("%d",&arr[temp]);
    
    scanf("%d",&m);
    find();
}
