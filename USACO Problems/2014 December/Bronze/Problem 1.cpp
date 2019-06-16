#include <iostream>
#include <cmath>

using namespace std;

int distance;

int manhattan(int x1,int x2,int x3,int y1,int y2, int y3)
{
    int d1=abs(x2-x1)+abs(y2-y1);
    int d2=abs(x3-x2)+abs(y3-y2);
    int d3=abs(x3-x1)+abs(y3-y1);
    int fin=d3-d2-d1;
    //cout<<"fin= "<<fin<<endl;
    return(fin);
}


int main()
{
    int num;
    int remove=0;
    int value=0;
    cin>>num;
    int x[num],y[num];
    for(int a=0;a<num;a++)
    {
        int temp=0;
        cin>>x[a]>>y[a];
        if(a>1&&a<num+1)
            temp=manhattan(x[a-2],x[a-1],x[a],y[a-2],y[a-1],y[a]);
        if(value>temp)
        {
            value=temp;
            remove=a-1;
        }
    }
    //cout<<remove<<endl;
    
    int sum=0;
    for(int a=remove;a<num;a++)
    {
        x[a]=x[a+1];
        y[a]=y[a+1];
    }
    for(int b=0;b<num-2;b++)
    {
        sum=sum+abs(x[b+1]-x[b])+abs(y[b+1]-y[b]);
        //cout<<"Val1="<<abs(x[b+1]-x[b-1])<<endl;
        //cout<<"Val2="<<abs(y[b+1]-y[b])<<endl;
    }
    /*for(int b=0;b<num-1;b++)
     cout<<"x= "<<x[b]<<" y= "<<y[b]<<endl;*/
    
    cout<<sum;
}
