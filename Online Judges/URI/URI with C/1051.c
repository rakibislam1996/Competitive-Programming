#include<stdio.h>
void main ()
{
    float a,tax;
    while(scanf("%f",&a)!=EOF)
    {
        if(a>=0.0 && a<=2000.00)
            printf("Isento\n");
        else if(a>=2000.01 && a<=3000.00)
        {
            a = a - 2000.00;
            tax = a * 0.08;
            printf("R$ %.2f\n",tax);
        }
        else if(a>=3000.01 && a<=4500.00)
        {
            a = a - 3000.00;
            tax = (a * 0.18) + (1000.00 * 0.08);
            printf("R$ %.2f\n",tax);

        }
        else if(a>4500.00)
        {
            a = a - 4500.00;
            tax  = (a * 0.28) + (1000 * 0.08) + (1500 * 0.18);
            printf("R$ %.2f\n",tax);
        }

    }
}
