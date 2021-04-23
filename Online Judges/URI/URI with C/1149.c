#include<stdio.h>
void main ()
{
    int A,N,i,sum ;
    scanf("%d %d",&A,&N);
    if(N<=0)
        scanf("%d",&N);
    sum = 0;
    for(i=1;i<=N;i++)
    {
        sum = sum + A++;
    }
    printf("%d\n",sum);

}
