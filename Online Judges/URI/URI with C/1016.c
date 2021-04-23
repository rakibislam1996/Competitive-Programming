#include<stdio.h>
void main ()
{
    int km,min=2;
    while(scanf("%d",&km)!=EOF)
    {
        min = min * km;
        printf("%d minutos\n",min);
    }
}
