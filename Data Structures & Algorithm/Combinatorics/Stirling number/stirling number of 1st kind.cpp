#include<bits/stdc++.h>
#define E "\n"
#define max 100
using namespace std;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

ui dp[50][50];

ui nCr(ui n,ui r)
{
    if(r<=1 || r==n)
        return 1;
    else if(dp[n][r]==-1)
        return dp[n][r] =   nCr(n-1,r-1) + r * nCr(n-1,r);
    else
        return dp[n][r];

}

int main ()
{
    memset(dp,-1,sizeof(dp));
    ui n,r;
    while(cin >> n >> r)
    {
        cout<<nCr(n,r)<<E<<E;
    }

    return 0;
}
