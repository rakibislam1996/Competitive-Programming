#include<stdio.h>
#include<string.h>
void main ()
{
    char T[501];
    gets(T);
    int len;
    len = strlen(T);
    if(len <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
}
