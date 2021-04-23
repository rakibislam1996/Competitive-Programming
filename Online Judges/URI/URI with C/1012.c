#include<stdio.h>
void main ()
{
    double A,B,C,triangle,circle,trapezium,square,rectangle;
    while(scanf("%lf %lf %lf",&A,&B,&C)!=EOF)
    {
        triangle = (1.0/2) * A * C;
        circle = 3.14159 * C * C;
        trapezium = (1.0/2) * (A + B) * C;
        square = B * B;
        rectangle = A * B;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);
    }
}
