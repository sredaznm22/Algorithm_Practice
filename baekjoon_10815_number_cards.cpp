#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main()
{
    set <int> s;
    int num1;
    cin>>num1;
    for(int a=0;a<num1;a++)
    {
        int x;
        scanf("%d",&x);
        s.insert(x);
    }
    /* 상근이 카드 */
    int num2;
    scanf("%d",&num2);
    for(int b=0;b<num2;b++)
    {
        int y;
        scanf("%d",&y);
        printf("%d ",s.count(y));
        
        /* set incldues {1,2,3,4,5}.count(1) > 1 ? 0 */
        
    }
}
