#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity O(no of bits)
/// Space complexity theta(1)

bool evenOrOdd(ulli N)
{
    if(N & 1)
        return true;
    else
        return false;
}
int main()
{
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        if(evenOrOdd(N))
            cout<<N<<" is odd"<<E<<E;
        else
            cout<<N<<" is even"<<E<<E;
    }
    return 0;
}
