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


vector <int> prime;
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

void sieve(int N=1000)
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
    prime.pb(1);
    prime.pb(2);
    for(i=3; i<=N; i+=2)
        if((status[i>>5] & (1<< (i&31)))==0)
            prime.pb(i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    sieve();
    int n,c;
    while(cin >> n >> c)
    {
        //pf("%d %d:",n,c);


        cout<<n<<" "<<c<<":";
//        output(n);
//        putchar(' ');
//        output(c);
//        putchar(':');
        if(n==1 && c==1)
        {
            //pf(" 1\n\n");
//            putchar(' ');
//            putchar('1');
//            putchar('\n');
//            putchar('\n');
            cout<<" 1\n\n";

            continue;
        }

        vector <int> v;

        v.pb(0);
        for(int num = 0; num < prime.size() ; num++)
        {
            if(prime.at(num)<=n)
                v.pb(prime.at(num));
            else
                break;
        }

        int Size = v.size()-1;

        if((Size&1)==1)
        {
            if(Size <= ((c<<1)-1))
            {
                for (int i=1; i<=Size; i++)
                {
                    //pf(" %d",v.at(i));
                    cout<<" "<<v.at(i);
                    //putchar(' ');
                    //output(v.at(i));
                }

            }
            else
            {
                int mid = (Size>>1)+1;
                for (int i = mid - (c-1); i <= mid + (c-1); i++)
                {
                    cout<<" "<<v.at(i);
                    //pf(" %d",v.at(i));
                    //putchar(' ');
                    //output(v.at(i));
                }
            }
        }
        else if((Size&1)==0)
        {
            if(Size <= (c<<1))
            {
                for (int i=1; i<=Size; i++)
                {
                    //pf(" %d",v.at(i));
                    cout<<" "<<v.at(i);
                    //putchar(' ');
                    //output(v.at(i));
                }

            }
            else
            {
                int mid1 = (Size>>1);
                int mid2 = (Size>>1)+1;
                for (int i = mid1 - (c-1); i <= mid2 + (c-1); i++)
                {
                    //pf(" %d",v.at(i));
                    cout<<" "<<v.at(i);
                    //putchar(' ');
                    //output(v.at(i));
                }
            }
        }
        cout<<"\n\n";
        //pf("\n\n");
        //putchar('\n');
        //putchar('\n');
        v.clear();
    }
    return 0;
}
