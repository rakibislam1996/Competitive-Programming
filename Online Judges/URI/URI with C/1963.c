#include<stdio.h>
void main ()
{
    double A,B,s;
    scanf("%lf %lf",&A,&B);
    s = ((B-A)/A) * 100.00;
    printf("%.2lf%%\n",s);
}
