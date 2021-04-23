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

#define mem(x,y) memset(x,y,sizeof(x))
#define mem0(v) memset(v,0,sizeof(v))
#define all(v) (v).begin(),(v).end()
#define arrSort sort(arr,arr+n)
#define vSort sort(all(v))
#define maxSort sort(all(v),greater<int>())
#define rSort sort(v.rbegin(),v.rend())
#define sqr(x) ((x)*(x))
#define qube(x) ((x)*(x)*(x))
#define deci(n) cout<<fixed<<setprecision(n);
#define find_dist(a,b) sqrt(sqr(a.first-b.first)+sqr(a.second-b.second))

#define for0(i,n) for(i = 0 ; i < n ; i++)
#define for1(i,n) for(i = 1 ; i <= n ; i++)
#define forn(i,n) for(i = n-1 ; i >= 0 ; i--)
#define fork(i,k,n) for(i = k; i <= n; i++)
#define rfork(i,k,n) for(i = k; i >= n; i--)
#define forstl(v) for(auto i=v.begin();i!=v.end();i++)
#define forstr(i,str) for(auto i = 0 ; str[i] ; i++)

#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define mod 1000000007
#define E "\n"
#define e putchar('\n')
#define space putchar(' ')

#define sci(n) scanf("%d",&n)
#define scii(a,b) scanf("%d%d",&a,&b)
#define sclli(n) scanf("%lld",&n)
#define scs(s) scanf("%s",s)
#define scl(l) scanf(" %[^\n]",l);
#define scd(n) scanf("%lf",&n);
#define scld(n) scanf("%llf",&n);
#define sc scanf
#define pf printf
#define TC(T) int T;sc("%d",&T);while(T--)
#define FTC(T) int T;sc("%d",&T);for(int i=1;i<=T;i++)
#define check(n, pos) (n & (1<<(pos)))
#define biton(n, pos) (n | (1<<(pos)))
#define bitoff(n, pos) (n & ~(1<<(pos)))
typedef long double ld;
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
#define vi vector<int>
#define vii vector< vi >
#define vlli vector<lli>
#define vulli vector<ulli>
#define vstr vector<string>
#define vchar vector<char>
#define Setlli set<lli>
#define Setulli set<ulli>
#define mii map<int,int>
#define msi map<string,int>
#define mis map<int,string>
#define pp pair<int,int>
#define ppp pair<int, pp >
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define Unique(v) v.erase(unique(all(v)),v.end());
using namespace std;
template<typename T>inline T gcd(T a,T b){while(b)b ^= a ^= b ^= a %= b;return a;}
template<typename T>inline T lcm(T a, T b){return (a / gcd(a,b)) * b;}
template<typename T>inline T bigMod(T a,T b,T m){if(b==0)return 1;T x=bigMod(a,b>>1,m);x=((x%m)*(x%m))%m;if(b&1)x=(x*(a%m))%m;return x;}
template<typename T>inline T negativeMod(T n,T m){return (n%m+m)%m;}
template<typename T>inline T bigMul(T a,T b,T m){if(b==0)return 0;T x=bigMul(a,b>>1,m);x=((x%m)+(x%m))%m;if(b&1)x=(x+(a%m))%m;return x;}
template<typename T>inline T extract(string s, T ret){stringstream ss(s);ss >> ret;return ret;}/// extract words or numbers from a line
template<typename T>inline string tostring(T n){stringstream ss;ss << n; return ss.str();}/// convert a number to string
template<typename T>inline T MIN3(T x,T y,T z){T Min=y^((x^y)& -(x<y));Min=z^((Min^z)& -(Min<z));return Min;}
template<typename T>inline T MAX3(T x,T y,T z){T Max=x^((x^y)& -(x<y));Max=Max^((Max^z)& -(Max<z));return Max;}
template<typename T>inline void printStl(T &v){int sz=v.size()-1;int k=0;for(auto i=v.begin();i!=v.end();i++,k++){if(k==sz)cout<<*i<<E;else cout<<*i<<" ";}}
template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}
    while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}
bool isVowel(char ch){ch=toupper(ch);return(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E');return false;}
bool isConsonant(char ch){return(isalpha(ch) && !isVowel(ch));return false;}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    int n;
    while(cin >> n)
    {
        bool flag = true;
        string arr;

        cin >> arr;
        if(n==1)
        {
            if(arr[0]=='0')
                cout<<"No\n";
            else
                cout<<"Yes\n";
            continue;
        }
        if(n==2)
        {
            if((arr[0]=='0' && arr[1]=='0') || (arr[0]=='1' && arr[1]=='1'))
                cout<<"No\n";
            else
                cout<<"Yes\n";
            continue;
        }
    int i,count0 = 0,count1=0;
    if((arr[n-2]=='0' && arr[n-1]=='0') || (arr[0]=='0' && arr[1]=='0'))
    {
        cout<<"No\n";
        continue;
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]=='0')
        {
            count0++;
            count1=0;
            if(count0==3)
            {
                flag = false;
                break;
            }
        }
        else if(arr[i]=='1')
        {
            count1++;
            count0 = 0;
            if(count1==2)
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    }
    return 0;
}
