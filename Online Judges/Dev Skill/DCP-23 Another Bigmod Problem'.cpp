#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmul(ll a, ll b, ll c)
{
    if (b == 0) return 0;

    if (b % 2 == 0)
    {
        ll x = bigmul(a, b / 2, c);
        x = (x + x) % c;
        return x;
    }
    else
        return (a + bigmul(a, b - 1, c)) % c;
}


ll Bigmod(ll a, ll b, ll c)
{
    if (b == 0) return 1;

    if (b % 2 == 0)
    {
        ll x = Bigmod(a, b / 2, c);
        x = bigmul(x, x, c);
        return x;
    }
    else
    {
        return bigmul(a, Bigmod(a, b - 1, c), c);
    }
}

int main()
{
    int t;
    ll a,b,c;
    scanf("%d",&t);
    for(int tc = 1; tc <= t; tc++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case %d: %lld\n",tc,Bigmod(a,b,c));
    }
    return 0;
}
