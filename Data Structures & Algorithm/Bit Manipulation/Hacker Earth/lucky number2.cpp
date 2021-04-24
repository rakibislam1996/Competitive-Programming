#include<bits/stdc++.h>
#define E "\n"
#define mod 1000000007
typedef unsigned int ui;
typedef long long int lli;

using namespace std;

/// Time complexity O(Number of set bits * N)
/// Space complexity O(1)

bool isLucky(lli n)
{
    ui count = 0;

    while(n)
    {
        n = n & (n-1);
        count++;
        if(count>2)
            return false;
    }
    if(count==2)
        return true;
    else
        return false;
}

int main ()
{
    ui T;
    scanf("%u",&T);
    while(T--)
    {
        lli N, sum = 0;
        scanf("%lld",&N);

        for(lli i=N;i>=5;i--)
        {
            if((i & (i-1))==0)
            {
                i--;
                continue;
            }
            bool isSet = isLucky(i);
            if(isSet)
            {
                sum = sum + (i % mod);
            }
        }
        if(N>=3)
            sum += 3;
        printf("%lld\n",sum);
    }

    return 0;
}
