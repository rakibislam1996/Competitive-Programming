#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity O(no of bits)
/// Space complexity theta(1)

int main()
{
    lli N;
    cout<<"N   = ";
    while(scanf("%lld",&N)!=EOF)
    {
        lli M = N;
        ui setCount = 0;

        ///This loop will continue until the last setbit to right of right most unset
        while(M & 1)
        {
            /// Unsetting the set bit

            N = N & (~(1<<setCount));

            setCount++;
            M = M >> 1;

        }
        /// Setting the right most unset

        N = N ^ (1<<setCount);
        cout<<"N+1 = "<<N<<E<<E;
    }
    return 0;
}

/**

N =  1 0 1 1 1    = 23

M =  1 0 1 1 1
     0 0 0 0 1
    &_________
     0 0 0 0 1

N = N & ~(1<<0)

    1 0 1 1 1
            0
   &__________
    1 0 1 1 0

setCount = 1
____________________

M  = M >> 1
M  = 1 0 1 1
     0 0 0 1
    &_______
     0 0 0 1

N = N & ~(1<<1)

    1 0 1 1 0
          0 1
   &__________
    1 0 1 0 0

setCount = 2
____________________

M  = M >> 1
M  = 1 0 1
     0 0 1
    &_______
     0 0 1

N = N & ~(1<<2)

    1 0 1 0 0
        0 1 1
   &__________
    1 0 0 0 0

setCount = 3

____________________

M  = M >> 1
M  = 1 0
     0 1
    &____
     0 0

N = N ^ (1<<setCount);

N = N & ~(1<<2)

    1 0 0 0 0
      1 0 0 0
   &__________
    1 1 0 0 0

N+1 = 1 1 0 0 0 = 24

____________________

**/

