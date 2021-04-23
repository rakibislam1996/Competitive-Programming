#include<stdio.h>
void main()
{
    int N,C,i;

    scanf("%d",&C);
    for(i=1;i<=C;i++)
    {
        scanf("%d",&N);
        if(N%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
}

