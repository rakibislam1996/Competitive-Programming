#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        if((N & (N-1))==0)
        {
            cout<<"The person survived at position: "<<1<<endl<<endl;
            continue;
        }
        else if((N & (N+1))==0)
        {
            cout<<"The person survived at position: "<<N<<endl<<endl;
            continue;
        }

        int a = log2(N);

        a = 1 << a;

        N = N ^ a;

        N = N << 1;

        N = N | 1;

        cout<<"The person survived at position: "<<N<<endl<<endl;
    }

    return 0;
/**
10 = 1010

floor(log2(10)) = 3

1<<3 = 1000

  1010
^ 1000
_______
  0010

  0010 << 1 = 00100

  0100
|    1
 _____
  0101 = 5

**/



