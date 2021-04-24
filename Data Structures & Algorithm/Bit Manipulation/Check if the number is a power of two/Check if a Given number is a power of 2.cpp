#include<bits/stdc++.h>
#define E "\n"
using namespace std;

bool isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x!=1 && !(x & (x - 1)));
}

int main ()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        bool isPowerOf2 = isPowerOfTwo(N);

        if(isPowerOf2 == true)
            cout<<"N is a power of 2\n";
        else
            cout<<"N is a not power of 2\n";
    }

    return 0;
}
