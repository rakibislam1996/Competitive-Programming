#include<bits/stdc++.h>
#define E "\n"
#define max 100
using namespace std;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

ui fact[100];

ui factorial(ui n)
{
    if(n==0)
        return 1;
    else if(fact[n]==-1)
        return fact[n] = n  * factorial(n-1);
    else
        return fact[n];

}
//int factorial( int n ) {
//    if( n == 0 || n == 1 ) return 1;
//    else return factorial( n-1 ) + factorial( n-2 );
//}
int main ()
{
    memset(fact,-1,sizeof(fact));
    ui n;
    while(cin >> n)
    {
        cout<<factorial(n)<<E<<E;
    }

    return 0;
}
