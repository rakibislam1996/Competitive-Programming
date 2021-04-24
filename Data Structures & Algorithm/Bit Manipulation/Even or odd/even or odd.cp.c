#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity O(no of bits)
/// Space complexity theta(1)

void addOne(ulli N)
{
    int m = 1;

    /* Flip all the set bits until we find a 0 */
    while( N & m )
    {
        N = N^m;
        m <<= 1;
    }

    /* flip the rightmost 0 bit */
    N = N^m;
    cout<<"N+1 = "<<N<<E<<E;
}
int main()
{
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        cout<<"N   = "<<N<<E;
        addOne(N);
    }
    return 0;
}

/**

N =  1 0 1 1 1    = 23
m = 1

N =  1 0 1 1 1
m =  0 0 0 0 1
    &_________
     0 0 0 0 1

    1 0 1 1 1
    0 0 0 0 1
   ^__________
    1 0 1 1 0

m = m << 1 = 1 0
____________________

N =  1 0 1 1 0
m =  0 0 0 1 0
    &_________
     0 0 0 1 0

    1 0 1 1 0
    0 0 0 1 0
   ^__________
    1 0 1 0 0

m = m << 1 = 1 0 0
____________________


N =  1 0 1 0 0
m =  0 0 1 0 0
    &_________
     0 0 0 1 0

    1 0 1 0 0
    0 0 1 0 0
   ^__________
    1 0 0 0 0

m = m << 1 = 1 0 0 0
____________________


N =  1 0 0 0 0
m =  0 1 0 0 0
    &_________
     0 0 0 0 0

while loop breaks here
______________________

    1 0 0 0 0
    0 1 0 0 0
   ^__________
    1 1 0 0 0

N+1 = 1 1 0 0 0 = 24
____________________


**/

