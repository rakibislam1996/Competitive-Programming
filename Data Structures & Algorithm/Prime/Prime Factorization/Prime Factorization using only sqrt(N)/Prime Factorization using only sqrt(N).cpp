#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ull;
vector <ll> pFactor;
#define pb push_back
#define E "\n"
/// max factor for ui = 65537
/// max factor for lli = 649657
/// max factor for ulli = 6700417
template<typename T>inline void factorws(T N)
{
    while(!(N&1))
    {
        pFactor.pb(2);
        N>>=1;
    }
    for(ll i=3; i*i<=N; i+=2)
        while(!(N%i))
        {
            pFactor.pb(i);
            N/=i;
        }
    if(N>1)
        pFactor.pb(N);
}
template<typename T>inline void printStl(T &v)
{
    int sz=v.size()-1;
    int k=0;
    for(auto i=v.begin(); i!=v.end(); i++,k++)
    {
        if(k==sz)
            cout<<*i<<E;
        else
            cout<<*i<<" ";
    }
}
int main()
{
    ll N;
    while(cin >> N)
    {
        factorws(N);
        printStl(pFactor);
        pFactor.clear();
    }
    return 0;
}
