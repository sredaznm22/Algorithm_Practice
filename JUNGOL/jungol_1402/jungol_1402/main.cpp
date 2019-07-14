#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int arr[500], cnt;

int k;
int n;

int find()
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
    
    if(cnt<k) return(0);
    return arr[k-1];
}

int main()
{
    scanf("%d%d",&n,&k);
    printf("%d",find());
}
