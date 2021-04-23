#include<bits/stdc++.h>
#define E "\n"
#define sc scanf
#define pf printf
#define pb push_back
#define mod 1000000007
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

vector <lli> prime;
bool flag = true;   // N is prime itself
void sieve(lli N=1000000)
{
    int status[(N>>5)+2] = {0};

    lli i, j, sqrtN;
    sqrtN = lli( sqrt( N ) );

    for( i = 3; i <= sqrtN; i += 2 )
    {
        if((status[i>>5] & (1<< (i&31)))==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5] |= (1<< (j&31));
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<=N; i+=2)
        if((status[i>>5] & (1<< (i&31)))==0)
            prime.push_back(i);
}

//void sieve(lli N=1000000)
//{
//
//    bool arr[(N/2)+1]= {false};
//
//    lli sqrtN = lli(sqrt(N));
//
//    for(lli i=3; i<=sqrtN; i += 2)
//    {
//        if(arr[i/2]==false)
//        {
//            for (lli j = i*i; j<=N ; j += (i+i))
//            {
//                arr[j/2] = true;
//            }
//        }
//    }
//    prime.push_back(2);
//    for (lli i=3; i<=N; i += 2)
//    {
//        if(arr[i/2] == false)
//            prime.push_back(i);
//
//    }
//}

void primeFactorization(lli N)
{
    set <lli> primeFactor;
    lli primeFactorSize = 0;

    lli sqrtN = lli(sqrt(N));

    while(N!=0 && N!=1 && primeFactorSize != prime.size() && prime.at(primeFactorSize)<=sqrtN)
    {
        while(N % prime.at(primeFactorSize) == 0)
        {
            primeFactor.insert(prime.at(primeFactorSize));
            N /= prime.at(primeFactorSize);
        }
        primeFactorSize++;
    }
    if(N>1)
        primeFactor.insert(N);
    if(primeFactor.size()==1)
        pf("-1\n");
    else
    {
        set<lli> :: iterator x;
        x = primeFactor.end();
        x--;
        pf("%lld\n",*x);
    }
    primeFactor.clear();
}

int main()
{
    sieve();
    lli n;
    while(scanf("%lld",&n) && n!=0)
    {
        if(fabs(n)==1)
        {
            printf("-1\n");
            continue;
        }

        primeFactorization(fabs(n));
    }
    return 0;
}
