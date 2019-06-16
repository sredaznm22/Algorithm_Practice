#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    
    for(int a=0;a<10;a++)
    {
        for(int b=0;b<10;b++)
        {
            char temp;
            cin>>temp;
            if(temp=='B')
            {
                x1=b;
                y1=a;
            }
            else if(temp=='R')
            {
                x2=b;
                y2=a;
            }
            else if(temp=='L')
            {
                x3=b;
                y3=a;
            }
        }
    }
    
    int answer;
    
    
    if((x1==x2&&x2==x3)||(y1==y2&&y2==y3))
    {
        if((x1<x2&&x2<x3)||(x3<x2&&x2<x1))
            answer=abs(y1-y3)+abs(x1-x3)+1;
        else if((y1<y2&&y2<y3)||(y3<y2&&y2<y1))
            answer=abs(y1-y3)+abs(x1-x3)+1;
        else
            answer=abs(y1-y3)+abs(x1-x3)-1;
    }
    else
        answer=abs(y1-y3)+abs(x1-x3)-1;
    
    cout<<answer;
}
