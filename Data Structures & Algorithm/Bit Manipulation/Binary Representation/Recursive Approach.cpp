#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(number of bits)
/// Space complexity theta(number of bits)

stack <ulli> bin;
void binary(ulli M)
{
    if(M>=1)
    {
        bin.push(M);
        binary(M >> 1);
    }
    else
    {
        while(!(bin.empty()))
        {
            printf("%lld ",bin.top()%2);
            bin.pop();
        }
    }
}


int main ()
{
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        binary(N);
        printf(E);
    }
    return 0;
}
