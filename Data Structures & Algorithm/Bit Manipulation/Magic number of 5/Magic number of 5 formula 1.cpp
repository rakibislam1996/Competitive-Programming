#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(Number of bits)
/// Space complexity O(1)

ulli findMagic(ulli M)
{
    ulli powOf5 = 1,sum = 0;

    while(M)
    {
        powOf5 *= 5;

        if(M & 1)
            sum += powOf5;

        M >>= 1;
    }
    return sum;
}

int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        ulli M = findMagic(N);
        cout<<N<<"th magic number is = "<<M<<E<<E;
    }

    return 0;
}

/**

powOf5 = 1 ,sum = 0

N = 10 = 1 0 1 0


powOf5 = 1 * 5 = 5

10 = 1 0 1 0

1 =  0 0 0 1
   &________
     0 0 0 0

sum = 0

1 0 1 0 >> 1 = 1 0 1


powOf5 = 5 * 5 = 25

     1 0 1

1 =  0 0 1
   &________
     0 0 1

sum = 0 + 25 = 25

1 0 1 >> 1 = 1 0


powOf5 = 25 * 5 = 125

     1 0

1 =  0 1
   &________
     0 0

sum = 25

1 0 >> 1 = 1


powOf5 = 125 * 5 = 625

     1

1 =  1
   &________
     1

sum = 25 + 625 = 650

1 >> 1 = 0

**/
