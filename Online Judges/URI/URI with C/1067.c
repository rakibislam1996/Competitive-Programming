#include<stdio.h>
void main()
{
    int X,i;
    while(scanf("%d",&X)!=EOF)
        for(i=1;i<=X;i++)
            if(i%2!=0)
                printf("%d\n",i);
}
