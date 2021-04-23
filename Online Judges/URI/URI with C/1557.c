#include <stdio.h>
void main()
{
    int i,j,k=1,N,T=1,x;
    for(;;)
    {
        scanf("%d",&N);
        if(N==0)
            break;
        int a[N][N];
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                a[i][j]= k;
                k = k*2;
            }
            k = a[i][0] * 2;
        }
        x = a[N-1][N-1];
        while(x>=10)
        {
            x = x/10;
            T++;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(j==(N-1))
                    printf("%*d\n",T,a[i][j]);
                else
                    printf("%*d ",T,a[i][j]);
            }

        }
        printf("\n");
        k = 1;
        T = 1;
    }

}
