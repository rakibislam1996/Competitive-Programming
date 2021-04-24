#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta (64 bits or 32 bits); v = 2^63 or 2^31
/// Space complexity O(1)

void binary(ulli M)
{
    size_t setCount = 0;

    /// 1 << 30 is valid but 1<< 30+ is not valid.
    /// To run this code upto 2^64-1 we have to first calculate 2^63 ,which is the lowest value containing 64 bits

    ulli v = pow(2,31);
    ///ulli v = pow(2,63);

    for(ulli i = v ; i>0; i = i >> 1)
    {

        if((M & i) && setCount!=1)
        {
            setCount = 1;
        }
        if(setCount)
        {
            if(M & i)
                printf("1 ");
            else
                printf("0 ");
        }


    }
    printf(E);
}


int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        binary(N);
    }
    return 0;
}
