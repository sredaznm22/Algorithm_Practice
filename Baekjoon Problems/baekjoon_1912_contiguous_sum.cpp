#include <iostream>

using namespace std;
#define INT_MIN -9999999999;
int maxsum(int arr[], int size)
{
    int max1 = INT_MIN;
    int max2 = 0;
    
    for (int i = 0; i < size; i++)
    {
        max2 = max2 + arr[i];
        if (max1 < max2)
            max1 = max2;
        
        if (max2 < 0)
            max2 = 0;
    }
    return max1;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int a=0;a<size;a++)
        cin>>arr[a];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,size);
}
