#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

ulli gcd(ulli a,ulli b)
{
    while(b)
        b ^= a ^= b ^= a %= b;

    return a;

}
int main()
{
    int T,cs=1;
    scanf("%d",&T);

    while(T--)
    {
        ulli A,B;
        scanf("%lld%lld",&A,&B);
        ulli ans = gcd(A,B);
        printf("Case %d: %lld\n",cs++,ans);
        printf("Case %d: %lld\n",cs,__gcd(A,B));

    }
    return 0;
}
