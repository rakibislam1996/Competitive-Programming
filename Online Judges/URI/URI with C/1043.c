#include<stdio.h>
void main ()
{
    float A,B,C,p,area;
    while(scanf("%f %f %f",&A,&B,&C)!=EOF)
    {
        if((A+B)>C && (A+C)>B && (B+C)>A)
            {
                p = A+B+C;
                printf("Perimetro = %.1f\n",p);
            }
        else
        {
            area = (C * (A+B))/2;
            printf("Area = %.1f\n",area);
        }
    }
}

