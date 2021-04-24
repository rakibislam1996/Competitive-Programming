#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity theta(1)
/// Space complexity theta(1)

int main()
{
    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        lli element,element_once=0;
        for(int i=0; i<N; i++)
        {
            scanf("%lld",&element);
            element_once ^= element;
        }
        cout<<"Element that appears once = "<<element_once<<E<<E;
    }
    return 0;
}
