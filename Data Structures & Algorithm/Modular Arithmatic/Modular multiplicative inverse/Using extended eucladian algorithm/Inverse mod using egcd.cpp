#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli negMod(lli x,lli m)
{
    return (x%m+m)%m;
}
lli egcd(lli A,lli B,lli &x,lli &y)
{
    if(B == 0)
    {
        x = 1;
        y = 0;
        return A;
    }
    lli x1,y1;
    lli d = egcd(B,A%B,x1,y1);
    x = y1;
    y = x1 - (y1 * (A/B));

    return d;
}
template<typename T>inline T inverseMod(T b,T m)
{
    T x,y;
    T z = egcd(b,m,x,y);
    if(z==1)
    {
        if(x<0)
            return negMod(x,m);
        else
            return x;
    }
    else
        return -1;
}
int main()
{
    lli B,M,x,y;

    while(cin >> B >> M)  /// B & M must be co-prime
    {
        lli x,y;
        //cout<<B<<" * "<<x<<" + "<<M<<" * "<<y<<" = "<<egcd(B,M,x,y)<<endl<<endl;
        cout<<"Here "<<B<<"^-1 mod "<<M<<" = ";
        if(inverseMod(B,M) != -1)
            cout<<inverseMod(B,M)<<endl;
        else
            cout<<"Does not exist\n";
    }

    return 0;
}
/**

Bx mod m = 1
x mod m = B^-1
Bx - My = 1;
Here x = B^-1 mod m

**/
