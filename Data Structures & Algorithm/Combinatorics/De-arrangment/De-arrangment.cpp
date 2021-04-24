#include<bits/stdc++.h>

#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

ulli deArrangment(ulli n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    return ((n-1)*deArrangment(n-2)+(n-1)*deArrangment(n-1));

}
int main()
{
    int T,cs=1;
    scanf("%d",&T);

    while(T--)
    {
        ulli N;
        scanf("%lld",&N);

        ulli ans = deArrangment(N);
        printf("Case %d: %lld\n",cs++,ans);
    }
    return 0;
}
