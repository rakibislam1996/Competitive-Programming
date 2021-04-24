#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(1)
/// Space complexity O(1)

lli getAbs(lli M)
{
    lli const mask = M >> (sizeof(lli)*CHAR_BIT -1);
    lli absOfM = (M ^ mask) - mask;
    return absOfM;
}

int main ()
{
    lli N;
    while(scanf("%lld",&N)!=EOF)
    {
        cout<<"Absolute value of "<<N<<" is = "<<getAbs(N)<<E<<E;
    }

    return 0;
}

/**
-5   =   1 1 1 1 1 0 1 1
mask =   1 1 1 1 1 1 1 1
       ^________________
         0 0 0 0 0 1 0 0
mask =   1 1 1 1 1 1 1 1
        -_______________
+5   =   0 0 0 0 0 1 0 1

+5   =   0 0 0 0 0 1 0 1
mask =   0 0 0 0 0 0 0 0
        ^_______________
         0 0 0 0 0 1 0 1
mask =   0 0 0 0 0 0 0 0
       -________________
+5   =   0 0 0 0 0 1 0 1
**/
