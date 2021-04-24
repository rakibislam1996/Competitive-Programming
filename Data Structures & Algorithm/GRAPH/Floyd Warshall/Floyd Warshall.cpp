#include<bits/stdc++.h>

#define mem(x,y)        memset(x,y,sizeof(x))
#define all(v)          (v).begin(),(v).end()
#define vSort(v)        sort(all(v))
#define maxSort(v)      sort(all(v),greater<int>())
#define sqr(x)          ((x)*(x))
#define deci(n)         cout<<fixed<<setprecision(n)

#define For(i,k,n)      for(i = k; i <= n; i++)
#define rFor(i,k,n)     for(i = k; i >= n; i--)
#define forstl(i,v)     for(__typeof(v.begin())i = v.begin();i!=v.end();i++)
#define forstr(i,str)   for(i = 0 ; str[i] ; i++)

#define Auto(v)         __typeof(v.begin())
#define E               "\n"
#define e               putchar('\n')
#define space           putchar(' ')

#define scl(l)          scanf(" %[^\n]",l)
#define scd(n)          scanf("%lf",&n)
#define cscout          cout<<"Case "<<cs<<": "
#define cspf            pf("Case %d: ",cs)
#define sc              scanf
#define pf              printf
#define gc              getchar
#define pc              putchar
#define Unique(v)       v.erase(unique(all(v)),v.end())

#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n |= (1<<(pos)))
#define bitoff(n,pos)   (n &= ~(1<<(pos)))

#define TC(T)           int T;sc("%d",&T);for(int cs=1;cs<=T;cs++)
#define FTC(T)          int T;cin>>T;for(int cs=1;cs<=T;cs++)

using namespace std;
typedef double db;
typedef long double ld;
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);
const double eps = 1e-7;
const ll mod = 1000000007;
#define inf 0x3f3f3f3f

#define SS              stringstream
#define vi              vector<int>
#define vll             vector<ll>
#define pii             pair<int,int>
#define pll             pair<ll,ll>
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define F               first
#define S               second

#define chkp(x,n)       (!(x[n>>6]&(1<<((n>>1)&31))))
#define setp(x,n)       (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 1005
vll prime,pFactor;
//ui status[(MX>>6)+2];
//template<typename T>inline void bitsieve(T N){T i,sq=sqrt(N)+2;prime.pb(2);for(i=3;i<=N;i+=2)if(chkp(status,i)){prime.pb(i);if(i<=sq)for(ll j=i*i;j<=N;j+=(i<<1))setp(status,j);}}
//template<typename T>inline void sieve(T N){T i,sq=sqrt(N)+2;status[0]=status[1]=1;prime.pb(2);/*for(i=4;i<=N;i+=2)status[i]=1;*/for(i=3;i<=N;i+=2)if(!(status[i])){prime.pb(i);if(i<=sq)for(ll j=i*i;j<=N;j+=(i<<1))status[j]=1;}}
//template<typename T>inline bool isPrime(T n){if(n==2)return 1;if(n<=1||!(n&1))return 0;return chkp(status,n);}
template<typename T>inline T noOfprime(T n,T p){T res=0;while(n>=p)res+=n/p,n/=p;return res;}
template<typename T>inline void factorws(T N){T sz=prime.size();for(T i=0;i<sz&&prime[i]*prime[i]<=N;i++){T temp=prime[i];while(!(N%temp)){pFactor.pb(temp);N/=temp;}}if(N>1)pFactor.pb(N);}
template<typename T>inline void factor(T N){while(!(N&1)){pFactor.pb(2);N>>=1;}for(ll i=3;i*i<=N;i+=2)while(!(N%i)){pFactor.pb(i);N/=i;}if(N>1)pFactor.pb(N);}
template<typename T>inline T totient(T N){T ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}for(ll i=3;i*i<=N;i+=2){if(!(N%i))ans-=(ans/i);while(!(N%i))N/=i;}if(N>1)ans-=(ans/N);return ans;}
template<typename T>inline T totientws(T N){ll ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}T sz=prime.size();for(T i=0;i<sz&&prime[i]*prime[i]<=N;i++){ll p=prime[i];if(!(N%p)){ans-=(ans/p);while(!(N%p))N/=p;}}if(N>1)ans-=(ans/N);return ans;}
template<typename T>inline T gcd(T a,T b){while(b)b ^= a ^= b ^= a %= b;return a;}
template<typename T>inline T egcd(T a,T b,T &x,T &y){if(!a){x=0;y=1;return b;}T x1,y1;T d=egcd(b%a,a,x1,y1);x=y1-(b/a)*x1;y=x1;return d;}
template<typename T>inline T lcm(T a, T b){return (a / gcd(a,b)) * b;}
template<typename T>inline T bigMul(T a,T b,T m){if(b==0)return 0;ull x=bigMul(a,b>>1,m);x=((x%m)+(x%m))%m;if(b&1)x=(x+(a%m))%m;return x;}
template<typename T>inline T bigMod(T a,T b,T m){if(b==0)return 1;ull x=bigMod(a,b>>1,m);x=((x%m)*(x%m))%m;if(b&1)x=(x*(a%m))%m;return x;}
template<typename T>inline T bigmodmul(T a,T b,T m){if(b==0)return 1;ull x=bigmodmul(a,b>>1,m);x=bigMul(x,x,ull(m));if(b&1)x=bigMul(x,ull(a),ull(m));return x;}
template<typename T>inline T negMod(T n,T m){return (n%m+m)%m;}
template<typename T>inline T inverseMod(T b,T m){T x,y;T z=egcd(b,m,x,y);if(z==1){if(x<0)return negMod(x,m);else return x;}else return -1;}
template<typename T>inline void printStl(T &v){int sz=v.size()-1;int k=0;forstl(i,v){if(k==sz)cout<<*i<<E;else cout<<*i<<" ";k++;}}
template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline void in2(T &a,T &b){in(a);in(b);}
template<typename T>inline void in3(T &a,T &b,T &c){in(a);in(b);in(c);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}

//int fx[] = {+1,-1, 0, 0};
//int fy[] = { 0, 0,+1,-1};
//int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
//int fx[] = { 2, 1,-1,-2,-2,-1, 1, 2};
//int fy[] = { 1, 2, 2, 1,-1,-2,-2,-1};

vi G[MX],cost[MX];
int n,edge,dis[MX],previous[MX];

void dij(int src)
{
    int i;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    For(i,1,n) dis[i]=inf,previous[i]=-1;
    pq.push(mp(0,src));
    dis[src]=0;
    previous[src]=src;
    while(!pq.empty())
    {
        pii x = pq.top(); pq.pop();
        int u = x.S, cst = x.F;
        for(i=0; i<G[u].size(); i++)
        {
            int v = G[u][i],w = cost[u][i];
            if(cst+w < dis[v])
            {
                dis[v] = cst+w;
                pq.push(mp(dis[v],v));
                previous[v] = u;
            }
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);
    TC(T)
    {
        int u,v,i,j,w;
        in2(n,edge);
        For(i,1,edge)
        {
            in3(u,v,w);
            G[u].pb(v); cost[u].pb(w);
            G[v].pb(u); cost[v].pb(w);
        }
        int src = 1;
        dij(src);

        For(i,1,n)
            cout<<i<<" : "<<dis[i]<<E;

        For(i,1,n) G[i].clear(),cost[i].clear();

    }
    return 0;
}

/*
1
7 8
1 2 5
1 3 4
1 4 8
2 5 1
3 5 10
4 6 1
5 6 3
5 7 3

1
5 6
1 2 2
1 3 1
1 4 3
2 3 1
4 5 2
5 3 5
*/
