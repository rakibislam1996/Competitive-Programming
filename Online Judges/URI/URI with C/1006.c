#include<stdio.h>
void main ()
{
    double A,B,C,MEDIA,WA,WB,WC;
    while(scanf("%lf %lf %lf",&A,&B,&C)==3)
    {
        WA = 2.0;
        WB = 3.0;
        WC = 5.0;
        A = A * WA;
        B = B * WB;
        C = C * WC;
        MEDIA = (A + B + C)/(WA+WB+WC) ;
        printf("MEDIA = %.5lf\n",MEDIA);

    }
}
