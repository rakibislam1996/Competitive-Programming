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
#define biton(n,pos)    (n | (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))

#define TC(T)           int T;sc("%d",&T);while(T--)
#define FTC(T)          int T;sc("%d",&T);for(int cs=1;cs<=T;cs++)

using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);
const double eps = 1e-7;
const ll mod = 1000000007;

#define SS              stringstream
#define vi              vector<int>
#define vll             vector<ll>
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define F               first
#define S               second

#define chkp(x,n)         (!(x[n>>6]&(1<<((n>>1)&31))))
#define setp(x,n)         (x[n>>6]|=(1<<((n>>1)&31)))

#define MX 1000000
vll prime,pFactor;
//ui status[(MX>>6)+2];
//template<typename T>inline void bitsieve(T N){T i,sq=sqrt(N)+2;prime.pb(2);for(i=3;i<=N;i+=2)if(chkp(status,i)){prime.pb(i);if(i<=sq)for(ll j=i*i;j<=N;j+=(i<<1))setp(status,j);}}
//template<typename T>inline void sieve(T N){T i,sq=sqrt(N)+2;status[0]=status[1]=1;prime.pb(2);/*for(i=4;i<=N;i+=2)status[i]=1;*/for(i=3;i<=N;i+=2)if(!(status[i])){prime.pb(i);if(i<=sq)for(ll j=i*i;j<=N;j+=(i<<1))status[j]=1;}}
//template<typename T>inline bool isPrime(T n){if(n==2)return 1;if(n<=1||!(n&1))return 0;return chkp(status,n);}
template<typename T>inline void factorws(T N){T sz=prime.size();for(T i=0;i<sz&&prime[i]*prime[i]<=N;i++){T temp=prime[i];while(!(N%temp)){pFactor.pb(temp);N/=temp;}}if(N>1)pFactor.pb(N);}
template<typename T>inline void factor(T N){while(!(N&1)){pFactor.pb(2);N>>=1;}for(ll i=3;i*i<=N;i+=2)while(!(N%i)){pFactor.pb(i);N/=i;}if(N>1)pFactor.pb(N);}
template<typename T>inline T totient(T N){if(N==1)return 0;T ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}for(ll i=3;i*i<=N;i+=2){if(!(N%i))ans-=(ans/i);while(!(N%i))N/=i;}if(N>1)ans-=(ans/N);return ans;}
template<typename T>inline T totientws(T N){if(N==1)return 0;ll ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}T sz=prime.size();for(T i=0;i<sz&&prime[i]*prime[i]<=N;i++){ll p=prime[i];if(!(N%p)){ans-=(ans/p);while(!(N%p))N/=p;}}if(N>1)ans-=(ans/N);return ans;}
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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);
    FTC(T)
    {
        ll x1,y1,x2,y2;
        in3(x1,y1,x2);
        in(y2);
        ll ans = gcd(abs(x1-x2),abs(y1-y2))+1;
        cspf;
        out(ans),e;
    }

    return 0;
}
/*

(a,b),(c,d) two points
The number of lattice points on the line segment
joining them is the same as the number on the line segment joining ⟨0,0⟩ to ⟨c−a,d−b⟩ or (m,n)
Thus, you might as well focus on counting the number of lattice points on the segment joining the origin to ⟨m,n⟩ for integers m and n. Look at the equation of the line containing this segment: it’s
y=(n/m)*x.
Reducing n/m to lowest terms : y=(a/b)*x,

Here x & y must be integers since lattice points are integer co ordinates.

y will be an integer if and only if x is divisible by b that is x is multiple of b.
and x must be in range 1 <= x <= abs(m) or abs(c-a)

Example:
(-135 ,-303), (-90, -58)

= (0,0) , (-45,-245)

y = (245/45) * x

y = (49/9) * x ;( diving by gcd(245,45) = 5)
Here x must be in range 1<=x<=45
so valid values of x are : 9,18,27,36,45
That is 5 valid values
so ans is = 5 + 1, the additional 1 is for (0,0)

this ans can be found easily by: (gcd(245,45) + 1) = 5 + 1 = 6
*/

