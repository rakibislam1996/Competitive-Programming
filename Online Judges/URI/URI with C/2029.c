#include<stdio.h>
#define PI 3.14
void main ()
{
    double V,D,h,a;
    while(scanf("%lf%lf",&V,&D)!=EOF)

    {
        a = PI * (D/2) * (D/2);

        h = V / a ;

        printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,a);
    }
}
