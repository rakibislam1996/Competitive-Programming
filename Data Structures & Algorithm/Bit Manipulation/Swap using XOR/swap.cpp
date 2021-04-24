#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity theta()
/// Space complexity theta(1)

int main()
{
    ulli X, Y;

    while(scanf("%lld%lld",&X,&Y)!=EOF)
    {
        cout<<"Before swapping: X = "<<X<<" and Y = "<<Y<<E<<E;
        X = X ^ Y;
        Y = Y ^ X;
        X = X ^ Y;
        cout<<"After swapping:  X = "<<X<<" and Y = "<<Y<<E<<E;
    }
    return 0;
}

/**

X = a , Y = b

X = X ^ Y = a ^ b
Y = Y ^ X = b ^ (a ^ b) = a ^ (b ^ b) = a ^ 0 = a
X = X ^ Y = (a ^ b) ^ a = b ^ (a ^ a) = b ^ 0 = b

**/

