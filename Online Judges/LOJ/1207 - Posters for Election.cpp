#include<bits/stdc++.h>

#define mem(x,y)        memset(x,y,sizeof(x))
#define all(v)          (v).begin(),(v).end()
#define arrSort(arr,n)  sort(arr,arr+n)
#define vSort(v)        sort(all(v))
#define maxSort(v)      sort(all(v),greater<int>())
#define rSort(v)        sort(v.rbegin(),v.rend())
#define sqr(x)          ((x)*(x))
#define qube(x)         ((x)*(x)*(x))
#define deci(n)         cout<<fixed<<setprecision(n)

#define For(i,k,n)      for(i = k; i <= n; i++)
#define rFor(i,k,n)     for(i = k; i >= n; i--)
#define forstl(i,v)     for(__typeof(v.begin())i = v.begin();i!=v.end();i++)
#define forstr(i,str)   for(i = 0 ; str[i] ; i++)

#define PI              3.141592653589793
#define mod             1000000007
#define E               "\n"
#define e               putchar('\n')
#define space           putchar(' ')

#define scs(s)          scanf("%s",s)
#define scl(l)          scanf(" %[^\n]",l)
#define scf(n)          scanf("%f",&n)
#define scd(n)          scanf("%lf",&n)
#define scld(n)         scanf("%llf",&n)
#define cscout          cout<<"Case "<<i<<": "
#define cspf            pf("Case %d: ",ii)
#define sc              scanf
#define pf              printf
#define gc              getchar
#define pc              putchar
#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n | (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))

#define TC(T)           int T;sc("%d",&T);while(T--)
#define FTC(T)          int T;sc("%d",&T);for(int ii=1;ii<=T;ii++)

using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
#define SS              stringstream
#define vi              vector<int>
#define vii             vector<vi>
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
vi prime,pFactor;
//bool status[10000007];
//template<typename T>inline void sieve(T N){T i,j,sq=sqrt(N)+2;status[0]=status[1]=1;prime.pb(2);for(i=4;i<=N;i+=2)status[i]=1;for(i=3;i<=N;i+=2)if(!(status[i])){prime.pb(i);if(i<=sq)for(j=i*i;j<=N;j+=(i<<1))status[j]=1;}}
//template<typename T>inline void factorws(T N){for(long i=0;prime[i]*prime[i]<=N;i++){T temp=prime[i];while(!(N%temp)){pFactor.pb(temp);N/=temp;}}if(N>1)pFactor.pb(N);}
template<typename T>inline void bitsieve(T N){int status[(N>>5)+2];memset(status,0,((N>>5)+2)<<2);prime.pb(2);T i,j,sq=sqrt(N)+2;for(i=3;i<=N;i+=2)if(!(status[i>>5]&(1<<(i&31)))){prime.pb(i);if(i<=sq)for(j=i*i;j<=N;j+=(i<<1))status[j>>5]|=(1<<(j&31));}}
template<typename T>inline void factor(T N){while(!(N&1)){pFactor.pb(2);N>>=1;}for(T i=3;i*i<=N;i+=2)while(!(N%i)){pFactor.pb(i);N/=i;}if(N>1)pFactor.pb(N);}
template<typename T>inline bool isPrime(T n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(T i=5;i*i<=n;i+=6)if(n%i==0||n%(i+2)==0)return false;return true;}
template<typename T>inline T totient(T N){T ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}for(T i=3;i*i<=N;i+=2){if(!(N%i))ans-=(ans/i);while(!(N%i))N/=i;}if(N>1)ans-=(ans/N);return ans;}
template<typename T>inline T gcd(T a,T b){while(b)b ^= a ^= b ^= a %= b;return a;}
template<typename T>inline T egcd(T a,T b,T &x,T &y){if(!a){x=0;y=1;return b;}T x1,y1;T d=egcd(b%a,a,x1,y1);x=y1-(b/a)*x1;y=x1;return d;}
template<typename T>inline T lcm(T a, T b){return (a / gcd(a,b)) * b;}
template<typename T>inline T bigMul(T a,T b,T m){if(b==0)return 0;ulli x=bigMul(a,b>>1,m);x=((x%m)+(x%m))%m;if(b&1)x=(x+(a%m))%m;return x;}
template<typename T>inline T bigMod(T a,T b,T m){if(b==0)return 1;ulli x=bigMod(a,b>>1,m);x=((x%m)*(x%m))%m;if(b&1)x=(x*(a%m))%m;return x;}
template<typename T>inline T bigmodmul(T a,T b,T m){if(b==0)return 1;ulli x=bigmodmul(a,b>>1,m);x=bigMul(x,x,ulli(m));if(b&1)x=bigMul(x,ulli(a),ulli(m));return x;}
template<typename T>inline T negMod(T n,T m){return (n%m+m)%m;}
template<typename T>inline T inverseMod(T b,T m){T x,y;T z=egcd(b,m,x,y);if(z==1){if(x<0)return negMod(x,m);else return x;}else return -1;}
template<typename T>inline void printStl(T &v){int sz=v.size()-1;int k=0;forstl(i,v){if(k==sz)cout<<*i<<E;else cout<<*i<<" ";k++;}}
template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline void in2(T &a,T &b){in(a);in(b);}
template<typename T>inline void in3(T &a,T &b,T &c){in(a);in(b);in(c);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}

#define sz 200005
int arr[sz];
lli tree[sz<<2];
lli prop[sz<<2];
void build(int node,int st,int en)
{
    if(st==en)
    {
        tree[node] = arr[st];
        return;
    }
    int md = st + ((en-st)>>1);
    int lft = node<<1;
    int rgt = (node<<1)+1;

    build(lft,st,md);
    build(rgt,md+1,en);

    //tree[node] = tree[lft] + tree[rgt];
}
void pushdown(int node,int st,int en)
{
    if(prop[node]==0 )
        return;
    if(st!=en)
    {
        int md = st + ((en-st)>>1);
        int lft = node<<1;
        int rgt = (node<<1)+1;

        tree[lft] = prop[node];
        prop[lft] = prop[node];

        tree[rgt] = prop[node];
        prop[rgt] = prop[node];
    }
    prop[node] = 0;

}

void update(int node,int st,int en,int i,int j,int val)
{
    pushdown(node,st,en);
    if(i>en || j<st)
        return;
    if(st>=i && en<=j)
    {
        //cout<<"node = "<<node<<" tree[node] = "<<tree[node]<<E;
        tree[node] = val;
        //cout<<"Tree[node] = "<<tree[node]<<E;
        prop[node] = val;
        return;
    }

    int md = st + ((en-st)>>1);
    int lft = node<<1;
    int rgt = (node<<1)+1;

    update(lft,st,md,i,j,val);
    update(rgt,md+1,en,i,j,val);

    //tree[node] = tree[lft] + tree[rgt];
}

lli query(int node,int st,int en,int i,int j)
{
    pushdown(node,st,en);

    if(i>en || j<st)
        return 0;
    if(st>=i && en<=j)
        return tree[node];

    int md = st + ((en-st)>>1);
    int lft = node<<1;
    int rgt = (node<<1)+1;

    return query(lft,st,md,i,j)+query(rgt,md+1,en,i,j);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);
    FTC(T)
    {
        int n;
        in(n);
        int l,r,val,k,i;
        int q = n<<1;
        mem(tree,0);
        mem(prop,0);

        For(i,1,n)
        {
            in2(l,r);
            update(1,1,q,l,r,i);
        }
        set<int>s;
        e;
        For(i,1,q)
        {

            int x = query(1,1,q,i,i);
            cout<<i<<" "<<x<<E;
            if(x>0)
                s.insert(x);

        }
        cspf;out(s.size());e;
    }
    return 0;
}
