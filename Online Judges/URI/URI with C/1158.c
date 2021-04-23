#include<stdio.h>
#include<math.h>
void main ()
{
    int N,X,Y,i,j,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
            scanf("%d %d",&X,&Y);
            for(j=X;j<(X+Y*2);j++)
                if(j%2!=0)
                    sum += j;
            printf("%d\n",sum);
            sum = 0;
        }

}
