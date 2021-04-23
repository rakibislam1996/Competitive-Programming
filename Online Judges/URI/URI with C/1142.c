#include<stdio.h>
void main ()
{
    int a=1,b,c,N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        b = a*a;
        c = a*b;
        printf("%d %d %d\n",a,b,c);
        b ++;
        c ++;
        printf("%d %d %d\n",a,b,c);
        a++;

    }
}
