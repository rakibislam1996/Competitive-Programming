#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(1)
/// Space complexity O(1)

int main ()
{

    lli x,y,z,Min,Max;
    while(scanf("%lld%lld%lld",&x,&y,&z)!=EOF)
    {
        cout<<"Between two elements x & y\n";
        Min = y ^ ((x ^ y) & -(x < y));
        cout<<"Min = "<<Min<<E;

        cout<<"Between three elements x , y & z\n";
        Min = z ^ ((Min ^ z) & -(Min < z));
        cout<<"Min = "<<Min<<E<<E;


        cout<<"Between two elements x & y\n";
        Max = x ^ ((x ^ y) & -(x < y));
        cout<<"Max = "<<Max<<E;

        cout<<"Between three elements x , y & z\n";
        Max = Max ^ ((Max ^ z) & -(Max < z));
        cout<<"Max = "<<Max<<E<<E;
    }

    return 0;
}

/**
x = 5, y = 2

Min = y ^ ((x ^ y) & -(x < y))
    = y ^ ((x ^ y) & 0 )
    = y ^ 0
    = y

Max = x ^ ((x ^ y) & -(x < y))
    = x ^ ((x ^ y) & 0 )
    = x ^ 0
    = x

x = 2, y = 5

Min = y ^ ((x ^ y) & -(x < y))
    = y ^ ((x ^ y) & 11111111 )
    = y ^ (x ^ y)
    = x ^ 0
    = x

Max = x ^ ((x ^ y) & -(x < y))
    = x ^ ((x ^ y) & 11111111 )
    = x ^ (x ^ y)
    = y ^ 0
    = y
**/
