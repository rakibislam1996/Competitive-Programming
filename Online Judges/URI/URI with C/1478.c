#include<stdio.h>
void main()
{
    int N,i,j,k,s,p;
    for(;;)
    {
        scanf("%d",&N);
        if(N==0)
            break;
        int a[N][N];
        for(i=0;i<N;i++)
        {
            s = i+1;
            for(j=0;j<=i;j++)
            {
                a[i][j] = s;
                s--;
            }
            s = 0;
            p = 2;
            for(k=i+1;k<N;k++)
            {
                a[i][k] = p;
                p++;
            }

        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(j==(N-1))
                    printf("%3d\n",a[i][j]);
                else
                    printf("%3d ",a[i][j]);
            }

        }
        printf("\n");

    }
}

