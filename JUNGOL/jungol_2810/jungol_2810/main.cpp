#include <cstdio>
#include <cmath>

using namespace std;

int l,w;

void find()
{
    int temp;
    int c=l;
    if(l>w) c=w;
    int lcm=1;
    for(temp=w;temp>=1;temp--)
    {
        if(l%temp==0&&w%temp==0)
        {
            lcm=temp;
            break;
        }
    }
    printf("%d",(l/lcm)*(w/lcm));
}

int main()
{
    scanf("%d%d",&l,&w);
    find();
}
