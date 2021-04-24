#include<bits/stdc++.h>
#define E "\n"
#define max 100
using namespace std;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;


ulli f[50];

ulli fact(ulli n)
{
    if(n==0 || n==1)
        return 1;
    if(f[n]==-1)
        return f[n] = fact(n-1) * n;
    return f[n];
}


ulli dp[50][50];

ulli nCr(ulli n,ulli r)
{
    if(r==n)
        return 1;
    else if(r==1)
         return fact(n-1);

    else if(n==r)
        return 1;
    else if(dp[n][r]==-1)
            return dp[n][r] =   nCr(n-1,r-1) + (n-1) * nCr(n-1,r);
    else
        return dp[n][r];

}

int main ()
{
    memset(dp,-1,sizeof(dp));
    memset(f,-1,sizeof(f));
    ulli n,r;
    while(cin >> n >> r)
    {
        cout<<nCr(n,r)<<E<<E;
    }

    return 0;
}
