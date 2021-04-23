#include<stdio.h>
void main ()
{
    int a,b,h;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>=12 && b<12)
        {
            h = (24 - a) + b;
            printf("O JOGO DUROU %d HORA(S)\n",h);
        }
        else if(b>=12 && a<12)
        {
            h = b - a;
            printf("O JOGO DUROU %d HORA(S)\n",h);
        }
        else if (a==b)
            printf("O JOGO DUROU 24 HORA(S)\n");
    }
}
