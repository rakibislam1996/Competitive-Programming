#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(no of set bits)
/// Space complexity theta(1)

stack <ulli> bin;
void binary(ulli M)
{
    if(M>=1)
    {
        bin.push(M);
        binary(M>>1);
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
/// We just have to find number of set bits in a ^ b

void noOfbit(ulli a,ulli b)
{
    ulli c = a ^ b;
    ui count = 0;
    /// Counting number of sets
    while(c)
    {
        c = c & (c-1);
        count++;
    }
    cout<<"No of bits which are to be flipped to convert from A to B = "<<count<<E<<E;
}

int main ()
{
    ulli N,M;

    while(scanf("%lld%lld",&N,&M)!=EOF)
    {
        cout<<N<<" = ";
        binary(N);
        printf(E);
        cout<<M<<" = ";
        binary(M);
        printf(E);
        noOfbit(N,M);
    }
    return 0;
}

/**

N = 23

23 = 0 0 0 1 0 1 1 1

10 = 0 0 0 0 1 0 1 0
   ^__________________
     0 0 0 1 1 1 0 1

Ans = 4 (no of set bits)
**/

