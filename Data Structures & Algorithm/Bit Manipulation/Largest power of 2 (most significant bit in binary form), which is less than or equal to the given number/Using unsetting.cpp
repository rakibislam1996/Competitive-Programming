#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(number of bits) for bit counting approach using countBit function
/// Time complexity theta(1) for bit counting approach using log2 function

/// Space complexity O(1)

///Counting number of bits of an integer
ui countBit(ulli x)
{
    ui count = 0;
    while(x)
    {
        count++;
        x >>= 1;
    }
    return count;
}

/// Unsetting using countBit function

ulli unset(ulli x,ui n)
{
    ///x = x & 1<<(n-1);


    return (1<<(n-1));
}
/// Unsetting using log2() function

ulli unset(ulli x)
{
    /// If the given number is power of 2 itself then it is the answer
    /// Checking if the given number is power of 2

    if(!(x & (x-1)))
        return x;

    /// If the given number is not power of 2,then we have unset all the bit to right of the MSB

    /// Receiving the number of bits of the given number

    ui noOfBits = ceil(log2(x));

    return (1<<(noOfBits-1));
}

int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        /// Using countBit function
        ///ui noOfBits = countBit(N);
        ///ulli M = unset(N,noOfBits);

        ///Using log2() function
        ulli M = unset(N);

        cout<<"Largest 2^n upto "<<N<<" is = "<<M<<E<<E;
    }

    return 0;
}

/**
  1 0 1 1 0 1
& 1 0 0 0 0 0
______________
  1 0 0 0 0 0
**/

