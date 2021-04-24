#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(ceil(log2(number of bits)))
/// Space complexity O(1)

lli setBits(lli x)
{
    lli k = 1;
    lli p = x >> k;

 //   int count = 0;
    while(p)
    {
        x = x | p;

        k = k << 1;

        p = x >> k;
   //     count++;
    }
   // cout<<count<<E<<E;

    return x;
}
int main ()
{
    lli N;
    while(scanf("%lld",&N)!=EOF)
    {
        lli M = setBits(N);
        M = (M+1) >> 1;

        cout<<"Largest 2^n upto "<<N<<" is = "<<M<<E<<E;
    }

    return 0;
}

/**
k = 1
p = x >> k
x =          1 0 0 0 1 0 0 0
p =       OR   1 0 0 0 1 0 0
            ___________________
x =          1 1 0 0 1 1 0 0
p = x >> k       1 1 0 0 1 1     k = k << 1 = 1 << 1 = 10 = 2
           OR___________________
x =          1 1 1 1 1 1 1 1
p = x >> k           1 1 1 1     k = k << 1 = 10 << 1 = 100 = 4
           OR___________________
x =          1 1 1 1 1 1 1 1     p = x >> k = 0  where k = k << 1 = 100 << 1 = 1000 = 8
                          +1
            _________________
x+1 =      1 0 0 0 0 0 0 0 0

x >> 1       1 0 0 0 0 0 0 0


**/



