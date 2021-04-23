#include<stdio.h>
#include<ctype.h>
void main ()
{
    int N,year,month;
    float M,mn;
    double day;
    while(scanf("%d",&N)!=EOF)
    {
            year =  N/365;
            M =  (float)N/365;
            M = M - year;
            month = (M * 12);
            M = M * 12;
            M = M - month;
            day =  ceil(M * 30);
            if(day == 30)
            {
                month  = 1;
                day = 0;
            }
            printf("%d ano(s)\n%d mes(es)\n%.lf dia(s)\n",year,month,day);
    }
}
