#include<stdio.h>
#include<math.h>
void main ()
{
    double s=0.0,i,j,p;

    for(i=1.0,j=0.0;i<=39.0;i += 2.0, j++)
    {
        p = pow(2,j);
        s = s + (i/p);
    }
    printf("%.2lf\n",s);
}
