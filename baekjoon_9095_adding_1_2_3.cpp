#include <iostream>
#include <stdio.h>

using namespace std;
int count = 0;

void f(int x)
{
    if (x == 0) {count++; return;}
    else if (x < 0) return;
    f(x-1);
    f(x-2);
    f(x-3);

}

int main() {
    int size, n;
    cin >> size;
    
    for (int i=0; i<size; i++) {
        cin >> n;
        count = 0;
        f(n);
        cout << count << endl;
    }

}
