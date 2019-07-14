#include <cstdio>
#include <algorithm>

using namespace std;
int arr[1000000], cnt;
int n;

void find()
{
    int i;
    for(i=1;i<n/i;i++)
    {
        if(n%i==0)
        {
            arr[cnt++]=i;
            arr[cnt++]=n/i;
        }
    }
    
    if(i*i==n)
    {
        arr[cnt++]=i;
    }
    sort(arr,arr+cnt);
    
    for(i=0;i<cnt;i++) printf("%d ",arr[i]);
}

int main()
{
    scanf("%d",&n);
    find();
}
