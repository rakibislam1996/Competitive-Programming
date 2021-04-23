#include<stdio.h>
void main()
{
    int N,i,j,k,s,X;
    for(;;)
    {
        scanf("%d",&N);
        if(N==0)
            break;
        int a[N][N],p=0,q=0,n=1;
        if(N%2==0)
            s = N/2;
        else
            s = N/2 + 1;

        X = N;

        for(i=1;i<=s;i++)
        {
            for(j=p;j<X;j++)
            {
                for(k=q;k<X;k++)
                {
                    a[j][k] = n;
                }
            }
            n++,p++,q++,X--;
        }
        for(j=0;j<N;j++)
            {
                for(k=0;k<N;k++)
                {
                    if(k==(N-1))
                        printf("%3d\n",a[j][k]);
                    else
                        printf("%3d ",a[j][k]);
                }
            }
        printf("\n");
    }
}
