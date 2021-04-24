#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

template<typename T>inline ull power(T A,T N)
{
    int len=log2(N);
    ull res=1;
    while(len>=0)
    {
        res*=res;
        if(N&(1<<len))
            res*=A;
        len--;
    }
    return res;
}

int main()
{
    ull a,n;

    while(cin >> a >> n)
    {
        cout<<"Here "<<a<<"^"<<n<<" = "<<power(a,n)<<endl;
    }

    return 0;
}
