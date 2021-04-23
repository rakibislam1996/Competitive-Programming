#include<stdio.h>
void main ()
{
    int X,Y,i,a,b;
    scanf("%d %d",&X,&Y);

    a = (X<Y) ? X : Y;
    b = (X>Y) ? X : Y;

    for(i=a+1 ; i<b ; i++)
    {
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
}
