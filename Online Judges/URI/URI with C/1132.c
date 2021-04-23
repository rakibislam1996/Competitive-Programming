#include<stdio.h>
void main ()
{
    int X,Y,sum=0,i,a,b;
    scanf("%d %d",&X,&Y);

    a = (X<Y) ? X : Y;
    b = (X>Y) ? X : Y;

    for(i=a ; i<=b ; i++)
    {
        if(i%13!=0)
            sum += i;
    }
    printf("%d\n",sum);
}
