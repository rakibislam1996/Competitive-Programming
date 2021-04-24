#include<bits/stdc++.h>
#define E "\n"
#define max 100
using namespace std;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

ui fib[100];

ui fibonacci(ui n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(fib[n]==-1)
        return fib[n] = fibonacci(n-1) + fibonacci(n-2);
    else
        return fib[n];

}

int main ()
{
    memset(fib,-1,sizeof(fib));
    ui n;
    while(cin >> n)
    {
        cout<<fibonacci(n)<<E<<E;
    }

    return 0;
}
