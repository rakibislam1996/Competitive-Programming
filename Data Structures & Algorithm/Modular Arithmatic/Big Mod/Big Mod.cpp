#include<bits/stdc++.h>
using namespace std;

#define E "\n"
#define sc scanf
#define pf prullif
#define pb push_back
#define mod 1000000007
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
ulli M;
ulli bigMod1(ulli A,ulli B)
{
    if(B==0)
        return 1;
    if((B & 1)==0)
    {
        ulli x = bigMod1(A,B>>1);
        return ((x%M) * (x%M))%M;
    }
    else
        return ((A%M) * (bigMod1(A,B-1)%M))%M;
}

ulli bigMod2(ulli A,ulli B)
{
    //cout<<"Before if(B==0) opeartion: "<<A<<" "<<B<<endl;
    if(B==0)
        return 1;

    ulli x = bigMod2(A,B>>1);

    //cout<<"Before x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;
    x = ((x % M) * (x % M)) %M;
    //cout<<"After x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;

    if(B & 1)
    {
        x = (x * (A % M)) %M;
        //cout<<"After x opeartion of odd: "<<A<<" "<<B<<" "<<x<<endl;
    }

    return x;
}

int main()
{
    ulli A,B;

    while(cin >> A >> B >> M)
    {
        cout<<A<<"^"<<B<<" % "<<M<<" = "<<bigMod2(A,B)<<endl<<endl;
        //cout<<A<<"^"<<B<<" % "<<M<<" = "<<bigMod2(A,B)<<endl<<endl;
    }

    return 0;
}
