#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

ulli M;

ulli gcd(ulli a,ulli b)
{
    while(b)
        b ^= a^= b ^= a %= b;
    return a;
}

int bigMod(ulli A,ulli B)
{
    //cout<<"M = "<<M<<endl;
    //cout<<"Before if(B==0) opeartion: "<<A<<" "<<B<<endl;
    if(B==0)
        return 1;

    ulli x = bigMod(A,B>>1);

    //cout<<"Before x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;
    x = ((x % M) * (x % M)) %M;
    //cout<<"After x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;

    if((B & 1)!=0)
    {
        x = (x * (A % M)) %M;
        //cout<<"After x opeartion of odd: "<<A<<" "<<B<<" "<<x<<endl;
    }

    return x;
}

bool isPrime(int n)
{
    //int sqrtN = sqrt(n);

    for (int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ulli a,p;

    while (cin >> p >> a)
    {

        if(p<=1 || a<1)
        {
            cout<<"No\n";
            continue;
        }
        if(gcd(a,p)==1)
        {
            M = p;
            ulli x = bigMod(a,p-1);
            if(x==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }
}
/**
If p is a prime number, then for every a, where p & a are co-prime,

a^(p-1) % n = 1

**/
