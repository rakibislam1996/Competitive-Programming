#include <stdio.h>
#include <math.h>
void main()
{
    int N,X,s,i,j,p;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        p = -1;
        s = sqrt(X);
        for(j=2;j<=s;j++)
        {
            if(X%j==0)
            {
                p = 0;
                break;
            }
            else
                continue;
        }
        if(p==-1)
            printf("%d eh primo\n",X);
        else
            printf("%d nao eh primo\n",X);
    }
}
