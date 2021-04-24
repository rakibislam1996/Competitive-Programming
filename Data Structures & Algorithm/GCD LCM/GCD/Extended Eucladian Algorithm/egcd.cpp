#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

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
    //cout<<"x1 = "<<x1<<" y1 = "<<y1<<endl;
    //cout<<"d = "<<d<<endl;
    x = y1;
    //cout<<"x = "<<x<<endl;
    y = x1 - (y1 * (A/B));
    //cout<<"y = "<<y<<endl;

    return d;
}

int main()
{
    lli A,B;

    while(cin >> A >> B)
    {
        lli x,y;
        //cout<<A<<" * "<<x<<" + "<<B<<" * "<<y<<" = "<<egcd(A,B,x,y)<<endl<<endl;
        cout<<x<<" "<<y<<" "<<egcd(A,B,x,y)<<endl;

    }

    return 0;
}
