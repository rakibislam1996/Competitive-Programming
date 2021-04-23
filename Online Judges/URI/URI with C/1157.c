#include<stdio.h>
#include<math.h>
void main ()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
            printf("%d\n",i);
    }
}
