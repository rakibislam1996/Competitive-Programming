#include<stdio.h>
void main ()
{
    float sal,newsal,gross;
    while(scanf("%f",&sal)!=EOF)
    {
        if(sal>=0.0 && sal<=400.00)
        {
            newsal = sal + (sal * 0.15);
            gross = sal * 0.15;
            printf("Novo salario: %.2f\n",newsal);
            printf("Reajuste ganho: %.2f\n",gross);
            printf("Em percentual: 15 %%\n");
        }
        else if(sal>=400.01 && sal<=800.00)
        {
            newsal = sal + (sal * 0.12);
            gross = sal * 0.12;
            printf("Novo salario: %.2f\n",newsal);
            printf("Reajuste ganho: %.2f\n",gross);
            printf("Em percentual: 12 %%\n");
        }
        else if(sal>=800.01 && sal<=1200.00)
        {
            newsal = sal + (sal * 0.10);
            gross = sal * 0.10;
            printf("Novo salario: %.2f\n",newsal);
            printf("Reajuste ganho: %.2f\n",gross);
            printf("Em percentual: 10 %%\n");
        }
        else if(sal>=1200.01 && sal<=2000.00)
        {
            newsal = sal + (sal * 0.07);
            gross = sal * 0.07;
            printf("Novo salario: %.2f\n",newsal);
            printf("Reajuste ganho: %.2f\n",gross);
            printf("Em percentual: 7 %%\n");
        }
        else if(sal>2000.00)
        {
            newsal = sal + (sal * 0.04);
            gross = sal * 0.04;
            printf("Novo salario: %.2f\n",newsal);
            printf("Reajuste ganho: %.2f\n",gross);
            printf("Em percentual: 4 %%\n");
        }
    }
}
