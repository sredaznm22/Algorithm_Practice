#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    /*
     ofstream tfile;
     tfile.open("1.txt");
     */
    // get from file
    
    vector<string> v2(5, "N");
    vector<vector<string> > v2d2(5,v2);
    
    string myarray[5][5] = {
        { "N", "N", "N","N","S" },
        { "N", "E", "E","E","N" },
        { "N", "E", "Y","E","N" },
        { "N", "E", "E","E","N" },
        { "N", "N", "N","N","N" },
    };
    
    int x1,x2,x3;
    int y1,y2,y3;
    
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            v2d2[a][b]=myarray[a][b];
            if(v2d2[a][b]=="Y")
            {
                x1=b;
                y1=a;
            }
            
        }
    }
    
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            v2d2[a][b]=myarray[a][b];
            if(v2d2[a][b]=="S")
            {
                x3=b;
                y3=a;
            }
        }
    }
    
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            v2d2[a][b]=myarray[a][b];
            if(v2d2[a][b]=="E")
            {
                if(-1<=a-x1&&a-x1<=1&&-1<=b-y1&&b-y1<1&&-1<=a-x3&&a-x3<=1&&-1<=b-y3&&b-y3<1)
                {
                    x2=b;
                    y2=a;
                }
            }
        }
    }
    
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            cout<<v2d2[a][b];
        }
        cout<<""<<endl;
    }
    
    cout<<"Y: "<<"["<<x1+1<<"]"<<"["<<y1+1<<"]"<<endl;
    cout<<"E: "<<"["<<x2+1<<"]"<<"["<<y2+1<<"]"<<endl;
    cout<<"S: "<<"["<<x3+1<<"]"<<"["<<y3+1<<"]"<<endl;
    // Y: 3,3
    // E: 4,2
    // S: 5,1
    
    
    return(0);
    
}
