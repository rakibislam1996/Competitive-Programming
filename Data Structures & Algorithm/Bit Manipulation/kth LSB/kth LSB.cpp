#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity theta(1)
/// Space complexity theta(1)

int main()
{
    lli N,k;

    while(scanf("%lld%lld",&N,&k)!=EOF)
    {
        if(N & (1<<(k-1)))
            cout<<"Kth Least Significant Bit is = "<<1<<E<<E;
        else
            cout<<"Kth Least Significant Bit is = "<<0<<E<<E;
    }
    return 0;
}
