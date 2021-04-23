#include <stdio.h>

void main ()
{
    long double X;
    scanf("%LE", &X);
    if(X<0)
        printf("-%.4LE\n",X);
    else
        printf("%.4LE\n",X);

}
