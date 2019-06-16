#include <iostream>

using namespace std;

int main()
{
    int x,sum=0,l=64;
    bool run=true;
    cin>>x;
    if(x==64)
        cout<<"1";
    else
    {
        while(run)
        {
            if(l/2>x)
                l=l/2;
            else
            {
                sum++;
                l=l/2;
                x=x-l;
            }
            if(l<1)
                run=false;
        }
        cout<<sum-1;
    }
}
