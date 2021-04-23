#include<stdio.h>
void main ()
{
    int I,J;
    for(J=60,I=1;J>=0;J -= 5,I += 3)
        printf("I=%d J=%d\n",I,J);
}
