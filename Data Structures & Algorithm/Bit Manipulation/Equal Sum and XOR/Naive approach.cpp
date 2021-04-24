#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
using namespace std;

/// Time complexity theta(N)
/// Space complexity O(1)

lli countValues(lli M)
{
    lli count=0;
    for(int i=0;i<=M;i++)
    {
        if((M+i) == (M^i))
            count++;
    }
    return count;
}

int main ()
{
    lli N;
    while(scanf("%lld",&N)!=EOF)
    {
        lli noOfvalues = countValues(N);
        cout<<"Number values satisfying the condition (N+i==N^i) is = "<<noOfvalues<<E<<E;
    }

    return 0;
}

/**
N = 12

N + 0 = 12
N ^ 0 = 12
12 =    0 0 0 0 1 1 0 0
0  =    0 0 0 0 0 0 0 0
       ^_______________
12 =    0 0 0 0 1 1 0 0

N + 1 = 13
N ^ 1 = 13
12 =    0 0 0 0 1 1 0 0
1  =    0 0 0 0 0 0 0 1
       ^_______________
13 =    0 0 0 0 1 1 0 1

N + 2 = 14
N ^ 2 = 14
12 =    0 0 0 0 1 1 0 0
2  =    0 0 0 0 0 0 1 0
       ^_______________
14 =    0 0 0 0 1 1 1 0

N + 3 = 15
N ^ 3 = 15
12 =    0 0 0 0 1 1 0 0
3  =    0 0 0 0 0 0 1 1
       ^_______________
15 =    0 0 0 0 1 1 1 1

Count = 4
**/
