#include<stdio.h>
void main ()
{
    double s=0,i,j,a;

    for(i=1;i<=100;i++)
    {
        s = s + (1.0/i);
    }
    printf("%.2lf\n",s);
}
