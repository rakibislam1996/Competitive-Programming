#include<stdio.h>
void main()
{
    int X,i;
    while(scanf("%d",&X)!=EOF)
        for(i=X;i<=X+11;i++)
            if(i%2!=0)
                printf("%d\n",i);
}
