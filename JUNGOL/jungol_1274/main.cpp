#include <stdio.h>

using namespace std;

char str[10];

int main()
{
    scanf("%s",str);
    char d=0;
    for(int i=0;i<8;i++)
    {
        d=d*2+str[i]-'0';
    }
    printf("%d",d);
}
