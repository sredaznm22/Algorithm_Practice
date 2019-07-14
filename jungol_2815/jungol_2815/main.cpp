#include <cstdio>

using namespace std;

int count=0,arr[100000],n;

void find()
{
    while(n>0)
    {
        arr[count]=n%2;
        n=n/2;
        count++;
    }
}

int main()
{
    scanf("%d",&n);
    find();
    for(int i=count-1;i>=0;i--) printf("%d",arr[i]);
}
