#include<stdio.h>
#define PI 3.14159
void main ()
{
    double R,A;
    while(scanf("%lf",&R)==1)
    {
        A = PI * R * R ;
        printf("A=%.4lf\n",A);

    }
}


