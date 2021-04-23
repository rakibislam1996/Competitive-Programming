#include<stdio.h>
void main()
{
    int N,i,j,k;
    while(scanf("%d",&N)!=EOF)
    {
        int a[N][N];
        for(i=0,k=N-1;i<N;i++,k--)
        {
            for(j=0;j<N;j++)
            {
                if(i==j)
                    a[i][j] = 1;
                else
                    a[i][j] = 3;
            }
            a[i][k] = 2;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(j==(N-1))
                    printf("%d\n",a[i][j]);
                else
                    printf("%d",a[i][j]);
            }
        }

    }
}

