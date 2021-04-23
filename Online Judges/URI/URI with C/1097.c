#include<stdio.h>
void main ()
{
    int I,J=7,k,l;
    for(I=1;I<=9;I += 2)
            {
                for(l=J;l>=J-2;l--)
                    printf("I=%d J=%d\n",I,l);
                J = l + 5;
            }
}
