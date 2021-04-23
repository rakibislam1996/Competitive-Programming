#include<stdio.h>
void main ()
{
    int a,b,min;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF)
    {
        if(a<7 || (a==7 && b==0))
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            min = ((a-7) * 60) + b;
            printf("Atraso maximo: %d\n",min);
        }
    }
}
