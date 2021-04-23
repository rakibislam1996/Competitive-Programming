#include<stdio.h>
void main ()
{
    int T,t1,t2,a1,b1,a2,b2,h,m;
    while(scanf("%d %d %d %d",&a1,&b1,&a2,&b2)!=EOF)
    {
        t1 = (a1*60) + b1;
        t2 = (a2*60) + b2;
        if(t1>t2)
        {
            T = (1440 - t1) + t2;
            h = (T / 60);
            m = T % 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if(t1<t2)
        {
            T = t2 - t1;
            h = (T / 60);
            m = T % 60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if (t1==t2)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
}
