#include<stdio.h>
void main ()
{
    int l,i,j,M,N,k,sum=0,count=0;

    for(;;)
    {
        scanf("%d %d",&M,&N);
        if(M>0 && N>0)
        {
            count++;
            i = (M<N)? M : N;
            j = (M>N)? M : N;
            sum = 0;
            for(k=i;k<=j;k++)
                {
                        printf("%d ",k);
                        sum += k;
                }
            printf("Sum=%d\n",sum);
        }
        else
            break;
    }

}
