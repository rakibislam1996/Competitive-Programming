#include <stdio.h>
int main()
{
    int X,Z;
    int sum = 0,count=0;
    scanf("%d %d",&X,&Z);
    while(Z<=X)
        scanf("%d",&Z);
    while(sum<=Z)
    {
        sum = sum + X;
        X++;
        count++;
    }
    printf("%d\n",count);
}
