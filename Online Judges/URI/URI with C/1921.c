#include<stdio.h>
void main ()
{
    long long n,c;

    scanf("%lld",&n);
    c = (n * (n-3)) / 2;
    printf("%lld\n",c);
}
