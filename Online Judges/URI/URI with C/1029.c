#include <stdio.h>

int count = 0;
int FIBO(int);
void main()
{
    int N,X,i,k,f;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        for(k=1;k<=X;k++)
            f = FIBO(k);
        printf("fib(%d) = %d calls = %d\n",X,count,f);
        count = 0;
        f = 0;
    }
}
int FIBO(int NUM)
{

    int FIB,FIBA,FIBB;
    if(NUM==0 || NUM==1)
    {
        FIB = NUM;
        return (FIB);
    }

    FIBA = FIBO(NUM-2);
    count++;
    FIBB = FIBO(NUM-1);

    FIB = FIBA + FIBB;

    return(FIB);
}
