#include<stdio.h>
void main ()
{
    int N,T,i,A,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&A);
        if(A<=2014)
        {
            T = 2015 - A;
            printf("%d D.C.\n",T);
        }
        else if(A>=2015)
        {
            T = A - 2014;
            printf("%d A.C.\n",T);
        }

    }
}
