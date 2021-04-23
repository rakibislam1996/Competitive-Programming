#include<stdio.h>
void main ()
{
    int N,min,loc,i;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++)
        scanf("%d",&X[i]);
    min = X[0];
    loc = 0;
    for(i=1;i<N;i++)
        if(min>X[i])
            {
                min = X[i];
                loc = i;
            }
    printf("Menor valor: %d\nPosicao: %d\n",min,loc);
}

