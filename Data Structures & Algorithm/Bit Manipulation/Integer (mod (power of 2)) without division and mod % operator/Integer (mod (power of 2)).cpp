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
    ulli N, d;
    cout<<(6 ^ 1) <<E<<E;
    while(scanf("%lld%lld",&N,&d)!=EOF)
    {
        cout<<(N & (d-1)) <<E<<E;
    }
    return 0;
}

/**

N = 14
d = 8

14        = 1 1 1 0

(d-1) = 7 = 0 1 1 1
         &_____________
            0 1 1 0

Ans = 6
**/

