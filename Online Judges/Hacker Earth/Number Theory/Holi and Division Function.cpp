#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll frq[200005],a[100005];
int main()
{
    //freopen("in09.txt","r",stdin);
    //freopen("out09.txt","w",stdout);
    ll t,n,q,x,y,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(frq,0,sizeof frq);
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            frq[a[i]]++;
        }
        for(i=1;i<=200000;i++)
        {
            frq[i]+=frq[i-1];
        }
        ll ans=0;
        for(i=1;i<=100000;i++)
        {
            ll curl,curr,val=1,co=1;
            while(true)
            {
                if(i%2==0)
                {
                    curl=(val*i)/2;
                    curl--;
                    curr=((val+2)*i)/2;
                    curr--;
                }
                else
                {
                    curl=(val*i)/2;
                    curr=((val+2)*i)/2;
                }
                if(curl>100000)
                break;
                ans+=(co*(frq[curr]-frq[curl]))*(frq[i]-frq[i-1]);
                co++;
                val+=2;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
