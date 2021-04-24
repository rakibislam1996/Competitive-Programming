#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
vector <long long> pFactor;
#define pb push_back
#define E "\n"
template<typename T>inline void factorws(T N)
{
    T temp=(int)sqrt(N);
    int status[(temp>>5)+2];
    memset(status,0,((temp>>5)+2)<<2);
    for(T i=3; i*i<=temp; i+=2)
        if(!(status[i>>5]&(1<<(i&31))))
            for(int j=i*i; j<=temp; j+=(i<<1))
                status[j>>5]|=(1<<(j&31));
    while(!(N&1))
    {
        pFactor.pb(2);
        N>>=1;
    }
    for(T i=3; i*i<=N; i+=2)
        if(!(status[i>>5]&(1<<(i&31))))
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
    ulli N;
    while(cin >> N)
    {
        factorws(N);
        printStl(pFactor);
        pFactor.clear();
    }
    return 0;
}
