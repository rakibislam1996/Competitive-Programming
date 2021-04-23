#include<stdio.h>
#define PI 3.14159
void main ()
{
    double R,V;
    while(scanf("%lf",&R)!=EOF)
    {
        V = (4.0/3) * PI * R * R * R;
        printf("VOLUME = %.3lf\n",V);
    }
}
