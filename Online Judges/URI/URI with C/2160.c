#include<string.h>
#include<stdio.h>
int main ()
{
    int len;
    char L[501];
    gets(L);
    len = strlen(L);
    if(len <= 80)
        printf("YES\n");
    else
        printf("NO\n");r
    return 0;
}
