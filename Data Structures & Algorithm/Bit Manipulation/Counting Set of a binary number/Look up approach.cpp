#include<bits/stdc++.h>
#define E "\n"
typedef long long int lli;
using namespace std;

/// Time complexity O(b/4); b = number of bits (grouped by 4 bits each)
/// Space complexity O(2^4)

int main ()
{
    ///    Index   = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
    size_t Table[] = {0,1,1,2,1,2,2,3,1,2, 2, 3, 2, 3, 3, 4};

    size_t n;

    while(scanf("%d",&n)!=EOF)
    {
        size_t countSet = 0,c=0;

        while(n)
        {
            countSet += Table[n & 0xF];
            n >>= 4;
            c++;
        }

        cout<<"Number of set bits in the binary representation of the given number is = "<<countSet<<E;
        cout<<"C = "<<c<<E;
    }

    return 0;
}

