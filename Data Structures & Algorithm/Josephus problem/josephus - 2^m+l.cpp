#include<bits/stdc++.h>
using namespace std;

int josephus(int N,int k)
{
    if(N==1)
        return 1;
    else
        return (josephus(N-1,k)+k-1)%N+1;
}


int main()
{
    int N;

    while(cin >> N)
    {
        int m = 1 << int(log2(N));

        int r = N - m;

        int survivor = (r<<1) + 1;

        cout<<"The person survived at position: "<<survivor<<endl<<endl;
    }

    return 0;
}
/**

N = 2^m + r
J(N) = 2*r + 1

**/

