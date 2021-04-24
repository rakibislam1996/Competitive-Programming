#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity O(Number of bits * x) ; x = Number of integers which were processed
/// Space complexity O(1)


///Checking if there are adjacent sets
bool isSparse(ulli M)
{
    ulli count=0;
    while(M)
    {
        if(M & 1)
            if((M>>1) & 1)
                return false;
        M >>= 1;
    }
    return true;
}

ulli findSparse(ulli M)
{
    while(1)
    {
        if(isSparse(M))
            return M;
        else
            M++;
    }
}

int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        ulli M = findSparse(N);
        cout<<"The next sparse number is = "<<M<<E<<E;
    }

    return 0;
}
