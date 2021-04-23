#include <stdio.h>
void main()
{
    int T,i,j,N;
    unsigned long long f[60],a,b;
    f[0] = 0;
    f[1] = 1;
    for(i=0;i<60;i++)
    {
        a = f[i];
        b = f[i+1];
        f[i+2] = a+b;

    }
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %lld\n",N,f[N]);
    }
}
