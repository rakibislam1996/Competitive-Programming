#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(number of set bits)
/// Space complexity O(1)

size_t CountSetBits(size_t x)
{
    size_t count = 0;

    while(x)
    {
        x = x & (x-1);
        count ++;
    }

    return count;
}

int main ()
{
    size_t N;
    while(scanf("%d",&N)!=EOF)
    {
        size_t countSet = CountSetBits(N);
        cout<<"Number of set bits in the binary representation of "<<N<<" is = "<<countSet<<E;
    }

    return 0;
}
