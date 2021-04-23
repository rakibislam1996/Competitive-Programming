#include<iostream>
#include<cmath>
//#include<cstdio>
int main ()
{
    double n,p1,p2;
    cin >> n;
    p1 = n / log(n);
    p2 = 1.25506 * (n/log(n));
    //printf("%.1lf %.1lf\n",p1,p2);
    return 0;
}

