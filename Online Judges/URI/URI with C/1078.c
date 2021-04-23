#include<stdio.h>
void main ()
{
    int N,M;
    int i;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
        {
            M = i * N;
            printf("%d x %d = %d\n",i,N,M);
        }
}
