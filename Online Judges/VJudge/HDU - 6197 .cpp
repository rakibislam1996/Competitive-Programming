#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
const int INF=0x3f3f3f3f,maxn=100005;
int dp[maxn],T,n,k,a[maxn];
int LIS()
{
    for(int i=1; i<n; i++)
        dp[i]=INF;
    dp[0]=a[0];
    int len=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>=dp[len-1])
            dp[len++]=a[i];
        else
            dp[upper_bound(dp,dp+n,a[i])-dp]=a[i];
    }
    return len;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        int flag=0;
        scanf("%d%d",&n,&k);
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        if(n-LIS()<=k)
            flag=1;
        else
        {
            for(int i=0; i<n; i++)
                a[i]*=-1;
            if(n-LIS()<=k)
                flag=1;
        }
        if(flag)
            printf("A is a magic array.\n");
        else
            printf("A is not a magic array.\n");
    }
    return 0;
}
