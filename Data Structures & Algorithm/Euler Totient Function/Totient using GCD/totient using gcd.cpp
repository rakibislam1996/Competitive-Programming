#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool isPrime(lli N)
{
    if(N<=1)
        return false;
    if(N<=4)
        return true;
    if(N%2==0 || N%3==0)
        return false;
    for(int i=5; i*i<=N; i+=6)
    {
        if((N%i)==0 || (N%(i+2))==0)
            return false;
    }
    return true;
}
lli gcd(lli A,lli B)
{
    while(B)
        B ^= A ^= B ^= A %= B;
    return A;
}
lli totient(lli N)
{
    int count = 1;
    for(int i=2;i<N;i++)
        if(gcd(N,i)==1)
            count++;
    return count;
}

int main()
{
    lli N;

    while(cin >> N)
    {
        if(isPrime(N))
            cout<<N-1<<endl;
        else
            cout<<totient(N)<<endl;
    }

    return 0;
}
