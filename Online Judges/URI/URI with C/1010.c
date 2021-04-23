#include<stdio.h>
void main ()
{
    int code1,code2,unit1,unit2;
    float price1,price2,total;
    while(scanf("%d %d %f %d %d %f",&code1,&unit1,&price1,&code2,&unit2,&price2)!=EOF)
    {
        total = (float)(unit1 * price1) + (float)(unit2 * price2);
        printf("VALOR A PAGAR: R$ %.2f\n",total);
    }
}
