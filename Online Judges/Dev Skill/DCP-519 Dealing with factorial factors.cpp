#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

vector <int> prime;
set <int> primeFactor[100000];
set <int> :: iterator it;
vector <int> p;

void eos(int N=31)
{
    int status[(N>>5)+2] = {0};

    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );

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
    p.push_back(2);
    for(i=3; i<=N; i+=2)
        if((status[i>>5] & (1<< (i&31)))==0)
            p.push_back(i);
}

void primeFactorization(int N)
{
    int M = N;

    int primeFactorSize = 0;
    int sqrtN = int(sqrt(N));
    while(N!=0 && N!=1 && primeFactorSize != p.size() && p.at(primeFactorSize)<=sqrtN)
    {
        if(N % p.at(primeFactorSize) == 0)
        {
            primeFactor[M].insert(p.at(primeFactorSize));
            while(N % p.at(primeFactorSize) == 0)
            {
                N /= p.at(primeFactorSize);
            }
        }
        primeFactorSize++;
    }
    if(N>1)
        primeFactor[M].insert(N);
}

void sieve(int N=1250)
{
    int status[(N>>5)+2] = {0};

    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );

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
    int count = 1;
    prime.push_back(1);
    prime.push_back(2+1);
    primeFactor[3]= {2,3};

    for(i=3,j=1; i<=N; i+=2)
        if((status[i>>5] & (1<< (i&31)))==0)
        {
            prime.push_back(i+1);

            for (int k=prime.at(j); k<=i; k++)
            {
                if(primeFactor[k].size()!=0)
                {
                    for (it = primeFactor[k].begin(); it!=primeFactor[k].end(); it++)
                    {
                        primeFactor[i+1].insert(*it);
                    }
                }
                else
                {
                    primeFactorization(k);
                    for (it = primeFactor[k].begin(); it!=primeFactor[k].end(); it++)
                    {
                        primeFactor[i+1].insert(*it);
                    }
                }
            }
            primeFactorization(i+1);
            count++;
            j++;
            if(count==200)
                break;
        }
}
template<class T>inline void input(T &x){
    x=0;
    bool neg=false;
    register char c = getchar();
    while ((c<48 || c>57) && c!='-') c = getchar();
    if (c == '-'){
        neg = true; c = getchar();
    }
    while (c>=48 && c<=57){
        x = (x<<3) + (x<<1) + c - 48;c = getchar();
    }
    if (neg) x = ~(x-1);
}
template<class T> inline void output(T x){
    char a[21];T i=1, j;
    if (x < 0){
        putchar('-');x = ~(x-1);
    }
    if (x==0) putchar('0');
    while (x){
        a[i++] = x%10 + 48; x /= 10;
    }
    for (j=i-1; j>=1; j--) putchar(a[j]);
}
#define e putchar('\n')
#define space putchar(' ')
int main()
{
    eos();
    sieve();

    int T,N;
    input(T);
    //scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        //scanf("%d",&N);
        input(N);
        printf("Caso ");
        output(i);
        printf(" -> ");
        int k=0;
        for (it=primeFactor[prime[N]].begin(); it!=primeFactor[prime[N]].end(); it++,k++)
        {
            if(k==primeFactor[prime[N]].size()-1)
                {output(*it);e;}
                //printf("%d\n",*it);
            else
                {output(*it);space;}
                    //printf("%d ",*it);
        }

    }
    return 0;
}
