#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(Number of bits)
/// Space complexity O(1)

lli countValues(lli M)
{
    lli unset_count=0;

    while(M)
    {
        if((M & 1)==0)
            unset_count++;
        M >>= 1;
    }

    return 1<<unset_count;
}

int main ()
{
    lli N;
    while(scanf("%lld",&N)!=EOF)
    {
        lli noOfvalues = countValues(N);
        cout<<"Number values satisfying the condition (N+i==N^i) is = "<<noOfvalues<<E<<E;
    }

    return 0;
}

/**

if (n & i) == 0 then (n + i) = (n ^ i)

Therefore (n & i) should be zero.
To make zero,
1) if kth bit is set, then kth bit of i should be zero.
1) if kth bit is unset, then kth bit of i can be zero or one.


N = 12

12 = 1 1  0   0

i:   0 0 0/1 0/1
     0 0  0   0  = 0
     0 0  0   1  = 1
     0 0  1   0  = 2
     0 0  1   1  = 3

There are four combinations of i.  4 = 2 power 2 = pow(2,no of unset bits)

N = 6

6 =  1 1  0

i:  0 0 0/1
    0 0  0  = 0
    0 0  1  = 1
There are two combinations of i.  2 = 2 power 1 = pow(2,no of unset bits)


**/
