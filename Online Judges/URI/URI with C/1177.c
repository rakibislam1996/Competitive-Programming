#include <stdio.h>
void main()
{
    int N[1000],T,j,i=0;

    scanf("%d",&T);
    while(i<1000)
    {
        for(j=0;j<T;j++)
            N[i++]=j;
    }
    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,N[i]);
}
