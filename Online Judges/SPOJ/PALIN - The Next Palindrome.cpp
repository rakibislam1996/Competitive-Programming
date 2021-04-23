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

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);

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
        //cscout;
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
