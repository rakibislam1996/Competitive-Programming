#include<stdio.h>
void main()
{
    int N,s,i;
    while(scanf("%d",&N)!=EOF)
        for(i=1;i<=N;i++)
            if(i%2==0)
                {
                    s = i * i;
                    printf("%d^2 = %d\n",i,s);
                }
}
