#include <stdio.h>
void main()
{
    int N[20];
    int i,j,t;
    for(i=0;i<20;i++)
        scanf("%d",&N[i]);
    for(i=0;i<10;i++)
    {
        t = N[i];
        N[i] = N[19-i];
        N[19-i] = t;
    }
    for(i=0;i<20;i++)
        printf("N[%d] = %d\n",i,N[i]);
}
