#include<stdio.h>
void main ()
{
    float I,J=1.0,k,l;
    for(I=0;I<2.2;I += 0.2)
    {
        for(l=J;l<=J+2;l++)
        {
            if(I == 0 || I == 1 || I  >= 2)
                printf("I=%.f J=%.f\n",I,l);
            else
                printf("I=%.1f J=%.1f\n",I,l);
        }
        J = J + 0.2;
    }
}
