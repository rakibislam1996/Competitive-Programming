#include<stdio.h>
void main ()
{
    int N;
    int i;
    scanf("%d",&N);
    for(i=2;i<10000;i++)
        if(i%N==2)
            printf("%d\n",i);
}
