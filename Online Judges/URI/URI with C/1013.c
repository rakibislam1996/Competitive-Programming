#include<stdio.h>
void main ()
{
    int a,b,c,big;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        big = (a>b)?((a>c)? a : c) : ((b>c)? b : c);
        printf("%d eh o maior\n",big);
    }
}

