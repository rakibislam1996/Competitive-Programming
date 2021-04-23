#include<bits/stdc++.h>

#define mem(x,y)        memset(x,y,sizeof(x))
#define all(v)          (v).begin(),(v).end()
#define maxSort(v)      sort(all(v),greater<int>())

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

#define TC(T)           int T;sc("%d",&T);for(int cs=1;cs<=T;cs++)
#define FTC(T)          int T;cin>>T;for(int cs=1;cs<=T;cs++)

using namespace std;
typedef double db;
typedef long double ld;
typedef unsigned int ui;
typedef long long int ll;

const double PI = acos(-1);
const double eps = 1e-7;
const ll mod = 1000000007;
const ll inf = 0x3f3f3f3f;

#define SS              stringstream
#define vi              vector<int>
#define vll             vector<ll>
#define pll             pair<ll,ll>
#define pb(x)           push_back(x)
#define mp(x,y)         make_pair(x,y)
#define F               first
#define S               second


template<typename T>inline void in(T &x){x=0;bool neg=false;register char c=getchar();while((c<48||c>57)&&c!=EOF&&c!='-')c=getchar();if(c=='-'){neg=true;c=getchar();}while(c>=48&&c<=57){x=(x<<3)+(x<<1)+c-48;c=getchar();}if(neg)x=~(x-1);}
template<typename T>inline void out(T x){char a[21];T i=1,j;if(x<0){putchar('-');x=~(x-1);}if(x==0)putchar('0');while(x){a[i++]=x%10+48;x/=10;}for(j=i-1;j>=1;j--)putchar(a[j]);}


int main()
{
    std::ios_base::sync_with_stdio(false);

    FTC(T)
    {
        string s,t;
        cin >> s;
        t = s;
        ll len  = s.length(),i,j,x,y,barbe = 0;

        for(i=0,j=len-1;i<=(len/2)-1;i++,j--)
            s[j] = s[i];

        if(s<=t)
        {
            y = (len&1)?(len/2):((len/2)-1);

            if(s[y]=='9')
            {
                while(s[y]=='9')
                {
                    s[y] = '0';
                    y--;
                    if(y<0)
                        break;
                }
                if(y>=0)
                    s[y]++;
                else if(y<0)
                {
                    barbe = 1;
                    y=0;
                }
                for(i=y,j=len-1-y;i<=(len/2)-1;i++,j--)
                    s[j] = s[i];
            }
            else
            {
                if(len&1)
                    s[y]++;
                else
                {
                    s[y]++;
                    s[y+1] = s[y];
                }
            }
        }
        if(barbe)
        {
            s[0]='1';
            cout<<s<<1<<E;
        }
        else
            cout<<s<<E;
    }
    return 0;
}
