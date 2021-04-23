#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<utility>
#include<sstream>
#include<cassert>
#include<cctype>
#include<algorithm>
#include<climits>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<iterator>
using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
#define mem(x,y)        memset(x,y,sizeof(x))
#define mem0(v)         memset(v,0,sizeof(v))
#define all(v)          (v).begin(),(v).end()
#define arrSort         sort(arr,arr+n)
#define vSort           sort(all(v))
#define maxSort         sort(all(v),greater<int>())
#define rSort           sort(v.rbegin(),v.rend())
#define sqr(x)          ((x)*(x))
#define qube(x)         ((x)*(x)*(x))
#define deci(n)         cout<<fixed<<setprecision(n);
#define find_dist(a,b)  sqrt(sqr(a.first-b.first)+sqr(a.second-b.second))

#define for0(i,n)       for(i = 0 ; i < n ; i++)
#define for1(i,n)       for(i = 1 ; i <= n ; i++)
#define forn(i,n)       for(i = n-1 ; i >= 0 ; i--)
#define fork(i,k,n)     for(i = k; i <= n; i++)
#define rfork(i,k,n)    for(i = k; i >= n; i--)
#define forstl(i,v)     for(__typeof(v.begin())i = v.begin();i!=v.end();i++)
#define forstr(str)     for(lli i = 0 ; str[i] ; i++)

#define TC(T)           int T;cin>>T;while(T--)
#define FTC(T)          int T;cin>>T;for(int i=1;i<=T;i++)

#define ERR             1e-9
#define pi              (2*acos(0))
#define PI              3.141592653589793
#define mod             1000000007
#define E               "\n"
#define e               putchar('\n')
#define space           putchar(' ')
#define Case            cout<<"Case "<<i<<": "

#define sci(n)          scanf("%d",&n)
#define scii(a,b)       scanf("d",&a,&b)
#define sclli(n)        scanf("%lld",&n)
#define scs(s)          scanf("%s",s)
#define scl(l)          scanf(" %[^\n]",l);
#define scd(n)          scanf("%lf",&n);
#define scld(n)         scanf("%llf",&n);
#define sc              scanf
#define pf              printf
#define gc              getchar
#define pc              putchar
#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n  (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))

#define SS              stringstream
#define vi              vector<int>
#define vii             vector< vi >
#define vlli            vector<lli>
#define vulli           vector<ulli>
#define vstr            vector<string>
#define vchar           vector<char>
#define Setlli          set<lli>
#define Setulli         set<ulli>
#define mii             map<int,int>
#define msi             map<string,int>
#define mis             map<int,string>
#define pp              pair<int,int>
#define ppp             pair<int, pp >
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define F               first
#define S               second
#define Unique(v)       v.erase(unique(all(v)),v.end());
vi prime,pFactor;
template<typename T>inline void sieve(T N){int status[(N>>5)+2];memset(status,0,((N>>5)+2)<<2);for(T i=3;i*i<=N;i+=2)if(!(status[i>>5]&(1<<(i&31))))for(T j=i*i;j<=N;j+=(i<<1))status[j>>5]|=(1<<(j&31));prime.pb(2);for(T i=3;i<=N;i+=2){if(!(status[i>>5]&(1<<(i&31))))prime.pb(i);}}
template<typename T>inline void factor(T N){while(!(N&1)){pFactor.pb(2);N>>=1;}for(T i=3;i*i<=N;i+=2)while(!(N%i)){pFactor.pb(i);N/=i;}if(N>1)pFactor.pb(N);}
template<typename T>inline bool isPrime(T n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i+=6)if(n%i==0||n%(i+2)==0)return false;return true;}
template<typename T>inline T totient(T N){T ans=N;if(!(N&1)){ans-=(ans>>1);while(!(N&1))N>>=1;}for(T i=3;i*i<=N;i+=2){if(!(N%i))ans-=(ans/i);while(!(N%i))N/=i;}if(N>1)ans-=(ans/N);return ans;}
template<typename T>inline T gcd(T a,T b){while(b)b ^= a ^= b ^= a %= b;return a;}
template<typename T>inline T egcd(T a,T b,T &x,T &y){if(!a){x=0;y=1;return b;}T x1,y1;T d=egcd(b%a,a,x1,y1);x=y1-(b/a)*x1;y=x1;return d;}
template<typename T>inline T lcm(T a, T b){return (a / gcd(a,b)) * b;}
template<typename T>inline T bigMul(T a,T b,T m){if(b==0)return 0;T x=bigMul(a,b>>1,m);x=((x%m)+(x%m))%m;if(b&1)x=(x+(a%m))%m;return x;}
template<typename T>inline T bigMod(T a,T b,T m){if(b==0)return 1;T x=bigMod(a,b>>1,m);x=((x%m)*(x%m))%m;if(b&1)x=(x*(a%m))%m;return x;}
template<typename T>inline T bigmodmul(T a,T b,T m){if(b==0)return 1;T x=bigmodmul(a,b>>1,m);x=bigMul(x,x,m);if(b&1)x=bigMul(x,a,m);return x;}
template<typename T>inline T negMod(T n,T m){return (n%m+m)%m;}
template<typename T>inline T inverseMod(T b,T m){T x,y;T z=egcd(b,m,x,y);if(z==1){if(x<0)return negMod(x,m);else return x;}else return -1;}
template<typename T>inline T StoI(string s, T ret){SS ss(s);ss >> ret;return ret;}
template<typename T>inline string ItoS(T n){SS ss;ss << n; return ss.str();}
template<typename T>inline T MIN3(T x,T y,T z){T Min=y^((x^y)& -(x<y));Min=z^((Min^z)& -(Min<z));return Min;}
template<typename T>inline T MAX3(T x,T y,T z){T Max=x^((x^y)& -(x<y));Max=Max^((Max^z)& -(Max<z));return Max;}
template<typename T>inline T BtoD(T x){T two=1,intn=0;while(x){if(x%10)intn+=two;x/=10;two<<=1;}return intn;}
template<typename T>inline void printStl(T &v){int sz=v.size()-1;int k=0;forstl(i,v){if(k==sz)cout<<*i<<E;else cout<<*i<<" ";k++;}}template<typename T>inline ulli power(T A,T N){int lengthOfN=log2(N);ulli result=1;while(lengthOfN>=0){result*=result;if(N&(1<<lengthOfN))result*=A;lengthOfN--;}return result;}
template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline T in2(T &a,T &b){in(a);in(b);}
template<typename T>inline T in3(T &a,T &b,T &c){in(a);in(b);in(c);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}
inline ulli BtoD(string str){ulli intS=0,two=1;int len=str.length();for(int i=len-1;i>=0;i--){if(str.at(i)=='1')intS+=two;two<<=1;}return intS;}
bool isVowel(char ch){ch=toupper(ch);return(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E');return false;}
bool isConsonant(char ch){return(isalpha(ch) && !isVowel(ch));return false;}
template<typename T> T division(string str,T m){string d=str;T remainder=0;forstr(str){remainder=(remainder*10+(str[i]-'0'))%m;if(!remainder){return str.length();}else str+=d;}}
bool flag = true;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);
    //string str;
    char str[50];
    while(gets(str))
    {
        lli n1=0,n2=0,checker=-1;

        lli index = 0;
        while(str[index]==' ')
            index++;
        int len = strlen(str);
        if(str[index]=='-')
        {
            for (lli i=index+1; i<len && str[i]!=' '; i++)
            {
                n1 = ((n1*10) + (str[i]-'0'));
            }
            if(n1==0)
            {
                    cout<<"2 2\n";
            }
            else if((n1%4)!=0 && !(n1&1))
            {
                cout<<"Bachelor Number.\n";
            }
            else if(n1 & 1)
            {
                n1 >>= 1;
                cout<<n1<<" "<<n1+1<<E;
            }
            else
            {
                n1 >>= 2;
                cout<<n1-1<<" "<<n1+1<<E;
            }

        }
        else
        {
            lli i;
            for (i=index; i<len && str[i]!=' '; i++)
            {
                n1 = ((n1*10) + (str[i]-'0'));
            }
            while(str[i]==' ' && i<len)
            {
                i++;
            }
            if(str[i]>='0' && str[i]<='9')
            {
                checker = 1;
                for (lli j=i; j<len && str[j]!=' '; j++)
                {
                    n2 = ((n2*10) + (str[j]-'0'));
                }
            }
            if(checker==-1)
            {
                if(n1==0)
                {
                    cout<<"2 2\n";
                }
                else if((n1%4)!=0 && !(n1&1))
                {
                    cout<<"Bachelor Number.\n";
                }
                else if(n1 & 1)
                {
                    n1 >>= 1;
                    cout<<n1+1<<" "<<n1<<E;
                }
                else
                {
                    n1 >>= 2;
                    cout<<n1+1<<" "<<n1-1<<E;
                }

            }
            else
            {
                lli sum = 0;
                for (lli i=n1; i<=n2; i++)
                {
                    if((i%4)!=0 && !(i&1))
                    {
                        sum++;
                    }

                }
                cout<<sum<<E;
            }
        }
    }



    return 0;
}
