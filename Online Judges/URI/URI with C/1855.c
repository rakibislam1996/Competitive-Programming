#include<stdio.h>
void main ()
{
    int X,Y,i,j;
    char a='!';
    scanf("%d %d",&X,&Y);
    char ch[Y][X];
    for(i=0;i<Y;i++)
        scanf("%s",ch[i]);
    for(i=0;i<Y;i++)
        for(j=0;j<X;j++)
            if(ch[i][j]=='*')
                    a = '*';
    printf("%c\n",a);
}
