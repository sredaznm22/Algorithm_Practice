#include <cstdio>

using namespace std;

char str[35];
int d;

int main()
{
    scanf("%s",str);
    for(int i=0;str[i];i++)
    {
        d=d*2+str[i]-'0';
    }
    printf("%d",d);
}
