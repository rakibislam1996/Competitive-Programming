#include<stdio.h>
void main ()
{
    int h1,m1,s1,h2,m2,s2,day1,day2,t1,t2,day,hour,min,sec,T;
    char a1[4],a2[4],c1,c2,c3,c4;

    scanf("%s%d",a1,&day1);
    scanf("%d %c %d %c %d",&h1,&c1,&m1,&c2,&s1);
    scanf("%s%d",a2,&day2);
    scanf("%d %c %d %c %d",&h2,&c3,&m2,&c4,&s2);
    t1 = (day1 * 86400) + (h1*3600) + (m1*60) +s1;
    t2 = (day2 * 86400) + (h2*3600) + (m2*60) +s2;
    T = t2 - t1;
    day = T / 86400;
    hour = (T % 86400)/3600;
    min = ((T % 86400)%3600)/60;
    sec = (((T % 86400)%3600)%60);
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,min,sec);
}
