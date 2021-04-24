#include<bits/stdc++.h>
using namespace std;

int mod(int A,int B)
{
    int positiveQuitient = fabs(A) / B;

    int negativeMod = A + (B * (positiveQuitient + 1));

    return negativeMod;
}

int negativeMod(int a,int m)
{
    return (a%m+m)%m;
}
int main()
{
    int A,B;

    while(cin >> A >> B)
    {
        cout<<A<<" % "<<B<<" = "<<mod(A,B)<<endl<<endl;
    }

    return 0;
}

/**

  A % B =  A  - ( q * b)
-17 % 5 = -17 - (-4 * 5)
        = -17 + 20
        = 3

positiveQuitient (q = fabs(A) / B) = fabs(-17) / 5 = 3

negativeMod (-17 % 5) = -17 + (5*(3+1)) = -17 + 20 = 3

**/
