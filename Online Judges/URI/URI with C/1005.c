#include<stdio.h>
void main ()
{
    double A,B,MEDIA,WA,WB;
    while(scanf("%lf %lf",&A,&B)==2)
    {
        WA = 3.5;
        WB = 7.5;
        A = A * WA;
        B = B * WB;
        MEDIA = (A + B)/(WA+WB) ;
        printf("MEDIA = %.5lf\n",MEDIA);

    }
}
