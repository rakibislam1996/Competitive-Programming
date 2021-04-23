#include<stdio.h>
void main ()
{
    int X,Y,i,j;
    scanf("%d %d",&X,&Y);
    for(i=1;i<=Y;i++)
    {

        for(j=1;j<=X && i<=Y;j++)
        {
                if(j==X)
                    printf("%d\n",i++);
                else
                    printf("%d ",i++);
        }
        i--;
    }
}
