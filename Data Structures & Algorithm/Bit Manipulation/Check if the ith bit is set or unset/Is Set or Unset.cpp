#include<bits/stdc++.h>
#define E "\n"
typedef size_t st;
typedef long long int lli;
using namespace std;

int main ()
{
    st N,i;
    while(scanf("%d%d",&N,&i)!=EOF)
    {
        if(N & 1<<(i-1))
            cout<<i<<" th bit of the binary form of "<<N<<" is set"<<E;
        else
            cout<<i<<" th bit of the binary form of "<<N<<" is unset"<<E;
    }

    return 0;
}
