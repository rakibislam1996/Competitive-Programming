#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli m;
lli bigMod(lli A,lli B)
{
    if(!B)
        return 1;

    lli x = bigMod(A,B>>1);

    x = ((x%m) * (x%m))%m;
    if(B&1)
        x = ((A%m) * x) % m;
    return x;
}

int main()
{
    lli B;

    while(cin >> B >> m)  /// B & M must be co-prime & M must be prime
    {
        cout<<"Here "<<B<<"^-1 mod "<<m<<" = "<<bigMod(B,m-2)<<endl;
    }

    return 0;
}
/**

B^-1 mod m = B^(m-2) % m

**/
