#include <iostream>
#include <string>

using namespace std;

int data[10] = {4, 1, 2, 3, 9, 7, 8, 6, 10, 5};
string name[100000];
int kor[100000];
int math[100000];
int eng[100000];

void quick_sort(int *data, int start, int end)
{
    
    if(start >= end){
        return;
    }
    
    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;
    string temp1;
    
    while(i <= j){
        while(i <= end && data[i] <= data[pivot]){
            i++;
        }
        while(j > start && data[j] >= data[pivot]){
            j--;
        }
        
        if(i > j){
            temp = data[j];
            temp1 = name[j];
            data[j] = data[pivot];
            name[j] = name[pivot];
            data[pivot] = temp;
            name[pivot] = temp1;
        }
        else
        {
            temp = data[i];
            temp1 = name[i];
            data[i] = data[j];
            name[i] = name[j];
            data[j] = temp;
            name[j] = temp1;
        }
    }
    
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}

int main()
{
    int numofp;
    cin>>numofp;
    for(int a=0;a<numofp;a++)
        cin>>name[a]>>kor[a]>>eng[a]>>math[a];
    
    quick_sort(data, 0, numofp);
    
    for(int i=0; i<10; i++){
        cout<<data[i]<<endl;
    }
    
    return 0;
}
