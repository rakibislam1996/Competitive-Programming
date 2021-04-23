#include <stdio.h>
void main()
{
    int i;
    double X,j;
    scanf("%lf",&X);
    for(i=0,j=X;i<100;i++,j /= 2.0)
    {
        printf("N[%d] = %.4lf\n", i,j);
    }
}
