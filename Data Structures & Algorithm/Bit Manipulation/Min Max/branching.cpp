#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;


int main ()
{

    lli x,y,z,Min,Max;
    while(scanf("%lld%lld%lld",&x,&y,&z)!=EOF)
    {
        cout<<"max = "<< ((x>y)? ((x>z)? x : z) : ((y>z)? y : z))<<endl;
        cout<<"min = "<< ((x<y)? ((x<z)? x : z) : ((y<z)? y : z))<<endl;

    }

    return 0;
}
