#include <stdio.h>
void main()
{
    int N,X,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i==N)
            printf("Ho!\n");
        else
            printf("Ho ");
    }
}
