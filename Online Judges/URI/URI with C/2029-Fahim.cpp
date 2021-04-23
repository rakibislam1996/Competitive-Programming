#include <bits/stdc++.h>
#define PI 3.14
using namespace std;
int main()
{
    double V, D,A,H;
    while(cin >> V >> D)
    {
        A = (PI *(D/2)*(D/2));
        H = V/(PI *(D/2)*(D/2));
        printf("ALTURA = %.2lf\n",H);
        printf("AREA = %.2lf\n",A);
    }

    return 0;
}
