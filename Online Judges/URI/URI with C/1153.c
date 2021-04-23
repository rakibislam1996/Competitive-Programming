#include <stdio.h>
int main()
{
    int N,f,i;
    scanf("%d",&N);
    f = N ;
    for(i=N;i>=1+1;i--)
    {
        f = f * (i-1);
    }
    printf("%d\n",f);
}
