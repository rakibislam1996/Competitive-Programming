#include<bits/stdc++.h>
#define E "\n"
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
void primeFactorization(lli N)
{
    vector <lli> primeFactor;
    lli primeFactorSize = 0;
    lli sqrtN = lli(sqrt(N));
    while(N!=0 && N!=1 && primeFactorSize != prime.size() && prime.at(primeFactorSize)<=sqrtN)
    {
        while(N % prime.at(primeFactorSize) == 0)
        {
            primeFactor.push_back(prime.at(primeFactorSize));
            N /= prime.at(primeFactorSize);
        }
        primeFactorSize++;
    }
    if(N>1)
        primeFactor.push_back(N);

    for (lli i=0; i!=primeFactor.size(); i++)
    {
        printf("    %lld\n",primeFactor.at(i));
    }
    printf(E);
    primeFactor.clear();
}

int main()
{
    sieve();
    lli N;
    while(scanf("%lld",&N) && N>=0)
    {
        if(N==0 || N==1 )
        {
            printf("\n");
            continue;
        }
        primeFactorization(N);
        flag = true;
    }
    return 0;
}
