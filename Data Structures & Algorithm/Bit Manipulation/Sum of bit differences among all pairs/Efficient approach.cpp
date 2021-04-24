#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity O(n)
/// Space complexity theta(1)

void sumBitDifferences(lli arr[], ulli n)
{
    ui ans = 0;  /// Initialize result

    /// traverse over all bits
    for (ui i = 0; i < 32; i++)
    {
        /// count number of elements with i'th bit set
        ui count = 0;
        for (ulli j = 0; j < n; j++)
            if ( (arr[j] & (1 << i)) )
                count++;

        /// Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2);
    }

    cout<<ans<<E;
}

int main()
{
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        lli arr[N];
        for(ulli i=0;i<N;i++)
            scanf("%lld",&arr[i]);

        sumBitDifferences(arr,N);
        printf(E);
    }

    ///To get the size of an array: size = sizeof arr / sizeof arr[0];

    return 0;
}
