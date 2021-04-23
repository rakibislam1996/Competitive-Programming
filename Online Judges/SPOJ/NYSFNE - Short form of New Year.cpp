#include<bits/stdc++.h>
#define E "\n"
#define sc scanf
#define pf printf
#define pb push_back
#define mod 100
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;


ulli bigMod(ulli A,ulli B)
{

    if(B==0)
        return 1;

    ulli x = bigMod(A,B/2);

    //cout<<"Before x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;
    x = ((x % mod) * (x % mod)) %mod;
    //cout<<"After x opeartion of even: "<<A<<" "<<B<<" "<<x<<endl;

    if((B % 2)==1)
    {
        x = (x * (A % mod)) %mod;
        //cout<<"After x opeartion of odd: "<<A<<" "<<B<<" "<<x<<endl;
    }

    return x;
}
int main ()
{
    ulli a,b;

    while(sc("%lld%lld",&a,&b)!=EOF)
    {
        int x = bigMod(a%100,b);
        if(x<10)
            pf("0%d\n",x);
        else
            pf("%d\n",x);
    }

    return 0;
}
