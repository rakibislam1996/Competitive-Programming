#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, dstnce, range;
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%lf%lf%lf", &v, &r1, &r2);
        X = (x2-x1)*(x2-x1);
        Y = (y2-y1)*(y2-y1);
        dstnce = sqrt(X+Y);
        dstnce += v*1.50;
        cout<<dstnce<<endl;
        range = r1+r2;
        if(dstnce > range) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
