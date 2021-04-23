#include<stdio.h>
void main ()
{
    double Salary,sold;
    char name[50];
    while(scanf("%s %lf %lf",name,&Salary,&sold)!=EOF)
    {
        sold = 0.15 * sold;
        Salary = Salary + sold;
        printf("TOTAL = R$ %.2lf\n",Salary);
    }
}
