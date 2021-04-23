#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

main ()
{
    double n;
    cin >>n;
    n = floor(n);
    double fib;
    fib  = (pow(((1 + sqrt(5))/2),n)-pow(((1 - sqrt(5))/2),n))/sqrt(5);
    printf("%.1lf\n",fib);
}
