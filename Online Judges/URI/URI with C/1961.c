#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int P,N,i,j;
    scanf("%d %d",&P,&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        if((a[i+1]-a[i])>P)
        {
            printf("GAME OVER\n");
            exit(0);
        }
        if((a[i]-a[i+1])>P)
        {
            printf("GAME OVER\n");
            exit(0);
        }
    }
    printf("YOU WIN\n");
}
