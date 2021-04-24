#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(1)
/// Space complexity O(1)

ulli swapBitpositions(ulli M)
{
    ulli even = M & 0xAAAAAAAA;
    even >>= 1;

    ulli odd = M & 0x55555555;
    odd <<= 1;

    M = even | odd;
    return M;

///    return ( ((M & 0xAAAAAAAA) >> 1) | ((M & 0x55555555) << 1) );
}

int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        ulli M = swapBitpositions(N);
        cout<<"After swapping even and odd bit position of "<<N<<" the value is = "<<M<<E<<E;
    }

    return 0;
}

/**


N = 23

23 = 0 0 0 1 0 1 1 1

AA = 1 0 1 0 1 0 1 0
   &__________________
     0 0 0 0 0 0 1 0

>>1= 0 0 0 0 0 0 0 1

23 = 0 0 0 1 0 1 1 1

55 = 0 1 0 1 0 1 0 1
   &__________________
     0 0 0 1 0 1 0 1

<<1= 0 0 1 0 1 0 1 0

>>1= 0 0 0 0 0 0 0 1
   | ________________
43 = 0 0 1 0 1 0 1 1

**/
