#include<bits/stdc++.h>
#define E "\n"
typedef long long int lli;
using namespace std;

int main ()
{
    int n;

    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int count0 = __builtin_clz(n);

        cout<<"Number of leading 0 bits in the binary representation of "<<n<<" is = "<<count0<<E;
    }
    return 0;
}

