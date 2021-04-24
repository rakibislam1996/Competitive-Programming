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
        N = N ^ ( 1<<(i-1) );

        cout<<i<<" th bit of the binary form of the given number is being toggled"<<E;
        cout<<"Now the given number is changed to "<<N<<E<<E;
    }
    return 0;
}
