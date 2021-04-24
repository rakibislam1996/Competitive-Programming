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
    if(r==0)
        return 1;
    else if(r==1)
        return n;
    else if(n==r)
        return 1;
    else if(dp[n][r]==-1)
        return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
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
