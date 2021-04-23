#include<stdio.h>
void main ()
{
    int N,WH;
    float Salary;

    while(scanf("%d %d %f",&N,&WH,&Salary)!=EOF)
    {
        Salary = (float)Salary * WH;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",N,Salary);
    }
}
