#include<stdio.h>
void main()
{
    int N,i,j,k,x,y,c,z;
    while(scanf("%d",&N)!=EOF)
    {
        int a[N][N];

        c = N/3;
        z = N - (2*c);

        for(i=0,k=N-1;i<N;i++,k--)
        {
            for(j=0;j<N;j++)
            {
                if(i==j)
                    a[i][j] = 2;
                else
                    a[i][j] = 0;
            }
            a[i][k] = 3;
        }

        for(i=c,x=1;x<=z;i++,x++)
            for(j=c,y=1;y<=z;j++,y++)
                a[i][j] = 1;

        a[N/2][N/2] = 4;

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
        printf("\n");

    }
}

