#include<stdio.h>
void main ()
{
    int N,i,j,sum=0,cs=1;

        while(scanf("%d",&N)!=EOF)
        {
            if(N==0)
            {
                    printf("Caso %d: 1 numero\n0\n\n",cs++);
            }
            else
            {
                for(i=1;i<=N;i++)
                    sum += i;
                printf("Caso %d: %d numeros\n",cs++,sum+1);
                printf("0 ");
                for(i=1;i<=N;i++)
                    for(j=1;j<=i;j++)
                    {
                        if(j==N)
                            printf("%d\n\n",i);
                        else
                            printf("%d ",i);
                    }
            }
            sum = 0;
        }

}
