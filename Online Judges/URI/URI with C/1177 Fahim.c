#include <stdio.h>
void main()
{
    int N[1000],T,j,i;
    scanf("%d",&T);
    for(i = 0,j =0;i <1000;i++)
    {

            printf("N[%d] = %d\n", i,j);
            j++;
            if(T==j)
                j = 0;
    }
}
