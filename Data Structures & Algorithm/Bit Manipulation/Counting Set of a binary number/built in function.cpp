#include<bits/stdc++.h>
#define E "\n"
typedef long long int lli;
using namespace std;

int main ()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        int countSet = __builtin_popcount(n);

        cout<<"Number of set bits in the binary representation of "<<n<<" is = "<<countSet<<E;
    }

    return 0;
}

