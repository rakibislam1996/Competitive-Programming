#include <stdio.h>
void main()
{
    int N,X,i,j,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        for(j=1;j<X;j++)
            if(X%j==0)
                sum += j;
        if(sum==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
        sum = 0;
    }
}
