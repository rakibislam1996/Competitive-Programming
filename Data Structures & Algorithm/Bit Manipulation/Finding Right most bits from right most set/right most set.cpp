#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(1)
/// Space complexity O(1)

int main ()
{
    lli N;
    while(scanf("%lld",&N)!=EOF)
    {
        lli M = N ^ (N & (N-1));
        cout<<"Decimal equivalent of right most bits from right most set "<<N<<" is = "<<M<<E<<E;
    }

    return 0;
}
