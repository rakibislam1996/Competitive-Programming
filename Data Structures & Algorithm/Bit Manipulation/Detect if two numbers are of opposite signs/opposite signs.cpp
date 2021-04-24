#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(1)
/// Space complexity O(1)

int main ()
{
    lli N,M;
    while(scanf("%lld%lld",&N,&M)!=EOF)
    {
        if((M^N)<0)
            cout<<M<<" & "<<N<<" are of opposite signs"<<E<<E;
        else
            cout<<M<<" & "<<N<<" are of same signs"<<E<<E;
    }

    return 0;
}

/**
-10 =   1 0 0 0 1 0 1 0
 5  =   0 0 0 0 0 1 0 1
       ^_______________
        1 0 0 0 1 1 1 1   < 0

-10 =   1 0 0 0 1 0 1 0
-5  =   1 0 0 0 0 1 0 1
       ^_______________
        0 0 0 0 1 1 1 1   > 0

10 =    0 0 0 0 1 0 1 0
-5  =   1 0 0 0 0 1 0 1
       ^_______________
        1 0 0 0 1 1 1 1   < 0

10 =    0 0 0 0 1 0 1 0
5  =    0 0 0 0 0 1 0 1
       ^_______________
        0 0 0 0 1 1 1 1   > 0

**/
