#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

lli m;
template<typename T>inline bigMod(T A,T B)
{
    if(!B)
        return 1;

    T x = bigMod(A,B>>1);

    x = ((x%m) * (x%m))%m;
    if(B&1)
        x = ((A%m) * x) % m;
    return x;
}

template<typename T>inline T totient(T N)
{
    T ans=N;
    if(!(N&1))
    {
        ans-=(ans>>1);
        while(!(N&1))
            N>>=1;
    }
    for(T i=3; i*i<=N; i+=2)
    {
        if(!(N%i))
            ans-=(ans/i);
        while(!(N%i))
            N/=i;
    }
    if(N>1)
        ans-=(ans/N);
    return ans;
}

int main()
{
    lli B;

    while(cin >> B >> m)  /// B & M must be co-prime
    {
        cout<<"Here "<<B<<"^-1 mod "<<m<<" = "<<bigMod(B,totient(m)-1)<<endl;
    }
    return 0;
}

/**
B^-1 mod m = B^(phi(m)-1) % m
**/
