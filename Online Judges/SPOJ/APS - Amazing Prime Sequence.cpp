#include<bits/stdc++.h>

#define mem(x,y)        memset(x,y,sizeof(x))
#define all(v)          (v).begin(),(v).end()
#define vSort(v)        sort(all(v))
#define maxSort(v)      sort(all(v),greater<int>())
#define rSort(v)        sort(v.rbegin(),v.rend())
#define sqr(x)          ((x)*(x))
#define deci(n)         cout<<fixed<<setprecision(n)

#define For(i,k,n)      for(i = k; i <= n; i++)
#define rFor(i,k,n)     for(i = k; i >= n; i--)
#define forstl(i,v)     for(__typeof(v.begin())i = v.begin();i!=v.end();i++)
#define forstr(i,str)   for(i = 0 ; str[i] ; i++)

const double PI = acos(-1);
const double eps = 1e-7;

//#define mod             1e9+7
#define E               "\n"
#define e               putchar('\n')
#define space           putchar(' ')

#define scs(s)          scanf("%s",s)
#define scl(l)          scanf(" %[^\n]",l)
#define scf(n)          scanf("%f",&n)
#define scd(n)          scanf("%lf",&n)
#define scld(n)         scanf("%llf",&n)
#define cscout          cout<<"Case "<<i<<": "
#define cspf            pf("Case %d: ",cs)
#define sc              scanf
#define pf              printf
#define gc              getchar
#define pc              putchar
#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n | (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))

#define TC(T)           int T;sc("%d",&T);while(T--)
#define FTC(T)          int T;sc("%d",&T);for(int cs=1;cs<=T;cs++)

using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
#define SS              stringstream
#define vi              vector<int>
#define vlli            vector<lli>
#define vchar           vector<char>
#define vstr            vector<string>
#define seti            set<int>
#define setlli          set<lli>
#define mii             map<int,int>
#define msi             map<string,int>
#define mis             map<int,string>
#define pp              pair<int,int>
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define F               first
#define S               second
#define Unique(v)       v.erase(unique(all(v)),v.end())
template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}

int SPF[10000007];
lli a[10000007];
template<typename T>inline void sieveSPF(T N)
{
    T i,sq=sqrt(N)+2;
    //prime.pb(2);
    for(i=1; i<=N; i++)
        (i&1)?SPF[i]=i:SPF[i]=2;
    for(i=3; i*i<=N; i+=2)
        if(SPF[i]==i)
        {
            //prime.pb(i);
            //if(i<=sq)
                for(lli j=i*i; j<=N; j+=(i<<1))
                    if(SPF[j]==j)
                        SPF[j]=i;
        }
}
void fun(void)
{
    lli i;
    For(i,2,10000000-1)
    {
        a[i] = a[i-1] + SPF[i];
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);

    sieveSPF(10000000-1);
    fun();
    TC(T)
    {
        int n;
        in(n);
        out(a[n]),e;

    }
    return 0;
}
