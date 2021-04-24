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
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        ulli product = ((N<<1) + N) + (N>>1);
        cout<<N<<" x "<<3.5<<" = "<<product<<E<<E;
    }
    return 0;
}

/**

N      =    1 1 1 1    = 15
N << 1 =  1 1 1 1 0    = 30
N >> 1 =      1 1 1    = 7
      + ____________________
52 =    1 1 0 1 0 0    = 52

**/

