#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ull;
vector <ll> pFactor,prime;
#define pb push_back
#define E "\n"
bool status[10000001];
template<typename T>inline void sieve(T N)
{
    T i,sq=sqrt(N)+2;
    status[0]=status[1]=1;
    prime.pb(2);
//    for(i=4; i<=N; i+=2)
//        status[i]=1;
    for(i=3; i<=N; i+=2)
        if(!(status[i]))
        {
            prime.pb(i);
            if(i<=sq)
                for(ll j=i*i; j<=N; j+=(i<<1))
                    status[j]=1;
        }
}
template<typename T>inline void factorws(T N)
{
    for(T i=0; prime[i]*prime[i]<=N; i++)
    {
        T temp=prime[i];
        while(!(N%temp))
        {
            pFactor.pb(temp);
            N/=temp;
        }
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
    /// max factor for ui = 65537
    /// max factor for lli = 649657
    /// max factor for ulli = 6700417
    sieve(1000000);
    ull N;
    while(cin >> N)
    {
        factorws(N);
        printStl(pFactor);
        pFactor.clear();
    }
    return 0;
}
