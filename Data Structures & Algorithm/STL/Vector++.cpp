#include<bits/stdc++.h>

#define mem(x,y)        memset(x,y,sizeof(x))
#define all(v)          (v).begin(),(v).end()
#define arrSort(arr,n)    sort(arr,arr+n)
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
#define cspf            pf("Case %d: ",i)
#define sc              scanf
#define pf              printf
#define gc              getchar
#define pc              putchar
#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n | (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))

#define TC(T)           int T;sc("%d",&T);while(T--)
#define FTC(T)          int T;sc("%d",&T);for(int i=1;i<=T;i++)

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
void display(vector<int>&v)
{
    vector<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<" ";
    }
    cout<<endl;
}
bool even(int x)
{
    return (!(x&1));

}
bool compare(int x,int y)
{
    return (x==y);

}
int main()
{
    vector<int> v = { 3, 2, 3, 3, 3, 4, 4, 5, 5, 3, 3};
    vector<int> v1 = { 12, 32, 52, 333 };
    deque<int> d = { 1, 2, 3, 2, 5, 2, 3, 3 };
    list <int> l = { 1, 2, 3, 2, 5, 2, 3, 3 };
    set<int> s= {  2, 3, 2, 2, 3, 3 , 4, 6 , 8, 9};
    multiset<int> ms = {  2, 3, 2, 2, 3 , 4, 6 , 6,8, 9},ms2;
    unordered_set<int> us{  2, 3, 2, 2, 3, 3 , 4, 6 , 8, 9};
    unordered_multiset<int> ums;
    map <char,int> m,m2,m3;
    multimap <char,int> mm;
    unordered_map <int,int> um={{4,5},{1,7},{9,3},{2,1},{9,4},{1,6}};
    unordered_multimap <char,int> umm;




//    cout<<accumulate(s.begin(),s.end(),0)<<E;

//    cout<<*(max_element(v.begin(),v.end()))<<E;
//    cout<<*(min_element(v.begin(),v.end()))<<E;
//
//    cout<<*(max_element(d.begin(),d.end()))<<E;
//    cout<<*(min_element(d.begin(),d.end()))<<E;
//
//    cout<<*(max_element(l.begin(),l.end()))<<E;
//    cout<<*(min_element(l.begin(),l.end()))<<E;
//
//    cout<<*(max_element(us.begin(),us.end()))<<E;
//    cout<<*(min_element(us.begin(),us.end()))<<E;
//
//    cout<<max_element(um.begin(),um.end())->F<<" "<<max_element(um.begin(),um.end())->S<<E;
//    cout<<min_element(um.begin(),um.end())->F<<" "<<min_element(um.begin(),um.end())->S<<E;

//    int n = count(l.begin(),l.end(),3);
//    cout<<n<<E;

//    unordered_multimap<string,string>ms1;
//    bool b = ms1.key_eq()("bal","bal");
//    cout<<b<<E;

//    um.emplace('I',211);
//    um.emplace('I',210);
//    um.insert(mp(65,101));
//    um.insert(mp(68,99));
//    um.insert({{'G',201},{'J',210},{'J',214}});
//    um.emplace('I',212);
//    um['O'] = 230;
//    cout<<um['I']<<E;

//    string str="all is well , that ends well",s1;
//    unordered_map <string,int> um2;
//    stringstream ss(str);
//    while(ss >> s1)
//        um2[s1]++;
//
//    int i;
//    forstl(i,um2)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;

//    mm.emplace('I',211);
//    mm.insert(mp(65,101));
//    mm.insert(mp(68,99));
//    mm.emplace('I',210);
//    mm.insert({{'G',201},{'J',210},{'J',214}});
//    mm.emplace('I',212);

//    int i;
//    forstl(i,mm)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    auto it = mm.equal_range('I');
//    auto itr = it.F;
//    for(;itr!=it.S;itr++)
//        cout<<itr->F<<" "<<itr->S<<E;

//    umm.erase('M');
//    forstl(i,umm)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    cout<<umm.size()<<E;
//    auto it = umm.equal_range('I');
//    cout<<(it.F->F)<<" "<<(it.F->S)<<E;
//    cout<<(it.S->F)<<" "<<(it.S->S)<<E;

//    mm.emplace('I',211);
//    mm.emplace('I',210);
//    mm.insert(mp(65,101));
//    mm.insert(mp(68,99));
//    mm.insert({{'G',201},{'J',210},{'J',214}});
//    mm.emplace('I',212);
//
//    auto i = mm.equal_range('A');
//    cout<<(i.F->F)<<" "<<(i.F->S)<<E;
//    cout<<(i.S->F)<<" "<<(i.S->S)<<E;

//    int i;
//    forstl(i,mm)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    auto j = mm.begin();
//    advance(j,2);
//    auto k = mm.begin();
//    advance(k,4);
//    mm.erase(j,k);

//    auto j = mm.lower_bound('I');

//    for(;j!=mm.upper_bound('I');j++)
//        cout<<j->F<<" "<<j->S<<E;
//    forstl(i,mm)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;

//    j = mm.upper_bound('I');
//    cout<<j->F<<" "<<j->S<<E;
//    auto i = v.begin();
//    advance(i,4);
//    auto j = v.begin();
//    advance(j,6);
//    auto k = v.begin();
//    advance(k,7);
//    v.erase(unique(i,j),k);
//    printStl(v);
//
//    m.insert(mp(65,101));
//    m.insert(mp(68,99));
//    m.insert({{'G',201},{'H',201}});
//    m.emplace('I',212);
//    m['J'] = 200;

//    auto i = m.equal_range('K');
//    cout<<(i.F->F)<<" "<<(i.F->S)<<E;
//    cout<<(i.S->F)<<" "<<(i.S->S)<<E;

//    cout<<m.at('J')<<E;

//
//    m3.insert(mp(65,101));
//    m3.insert(mp(68,99));
//    m3.insert({{'G',201},{'H',203}});
//    m3.insert({{'G',201},{'H',201}});
//    m3.emplace('I',212);

//    m2.insert(mp('c',101));
//    m2.insert(mp('b',99));
//    m2.insert(mp('f',101));
//    m2.insert(mp('e',99));
//    int i;
//    forstl(i,m)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    forstl(i,m3)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    if(m!=m3)
//        cout<<"Yes\n";
//    else
//        cout<<"No\n";
//    cout<<m2.count((m2.find('c')->S))<<E;
//    forstl(i,m2)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    auto it = m2.begin();
//    advance(it,1);
//    auto j = m2.begin();
//    advance(j,2);
//
//    m.insert(it,j);
//    forstl(i,m)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
//    forstl(i,m2)
//    {
//        cout<<i->F<<" "<<i->S<<E;
//    }
//    e;
////    cout<<it->F<<" "<<it->S<<E;
////    it = m.upper_bound('a');
////    cout<<it->F<<" "<<it->S<<E;

//    printStl(us);
//
//    auto i = us.begin();
//    advance(i,2);
//
//    auto j = us.begin();
//    advance(j,4);
//
//    us.erase(i,j);
//    printStl(us);
//    string s1 = "sad",s2 = "sad"   ;
//    char c1 = 'a', c2 = 'a';
//    char f1 = 1.0, f2 = 0.999999;
//    bool b = ums.key_eq()(s1,s2);
//    if(b)
//        cout<<"Yes\n";
//    else
//        cout<<"No\n";


//    vector <int> bl{6,8,9,10,1,2,3,4,10,5};
//    vector <int> bal{4,5,1,2,3,10,6,8,9,9};

//    if(bl==bal)
//        cout<<"Yes\n";
//    else
//        cout<<"No\n";

//    printStl(bl);
//    printStl(bal);
//
//    auto k = bl.begin();
//    advance(k,2);
//
//    auto i = bal.begin();
//    advance(i,1);
//
//    auto j = bal.begin();
//    advance(j,4);
//
//    bl.insert(i,j);
//    printStl(bl);

//    bal.erase(i,j);
//    printStl(bal);

//    printStl(s);
//    auto i = v.begin();
//    auto j = v.begin();
//    advance(i,1);
//    advance(j,4);
//    //j++;
//    auto k = find(i,j,8);
//    if(k==v.end())
//        cout<<"Not found\n";
//    else
//        cout<<"Found\n";
//    cout<<*k<<E;
//    printStl(s);
//    l.pb(120);
//    printStl(l);
//    l.pop_back();
//    printStl(l);
//    l.push_front(120);
//    printStl(l);
//    l.pop_front();
//    printStl(l);
//    cout<<l.front()<<" "<<l.back()<<E;
//    cout<<*(s.lower_bound(1))<<" "<<*(s.upper_bound(1))<<E;
//    if(s.upper_bound(1)==s.end() && s.lower_bound(1)==s.end())
//        cout<<"Yes\n";
//    auto i = s.equal_range(9);
//
//    cout<<*(i.F)<<" "<<*(i.S)<<E;

//  cout<<ms.count(7)<<E;
//    auto i = ms.find(3);
//    i++;
//  ms.insert(4);
//  cout<<*i<<E;
//  i++;
//    ms.erase(ms.begin(),ms.find(7));
//    if(i==ms.begin())
//        cout<<"Yes\n";
//    cout<<*i<<E;
//    i++;
//    cout<<*i<<E;
//    i++;
//    cout<<*i<<E;
//    i++;
//    cout<<*i<<E;

//    printStl(ms);

//    auto it = ms.equal_range(4);
//    cout<<*(it.F)<<" "<<*(it.S)<<E;

//    cout<<*it<<E;
//    advance(it,6);
//    it = s.emplace_hint(it,7);
//    cout<<*it<<E;

//  auto i = s.find(6);

//    cout<<s.count(7)<<E;
//    cout<<*i<<E;
//    printStl(s);
//    if(i==s.end())
//        cout<<"Not found\n";

//    cout<<*i<<E;
//    l.unique(compare);
//    printStl(l);
//    v.erase(unique(v.begin(),v.end(),compare),v.end());
//    printStl(v);
//    .erase(remove_if(v.begin(),v.end(),even),v.end());
//    list <int> l1 = { 1, 2, 5, 2, 3, 3,11,12,2,3 };
//    list <int> l2 = { 7,8,9,10 };
//    l2.push_front(2);
//    printStl(l2);
//    auto i = l.begin();
//    advance(i,2);
//    cout<<*i<<E;
//    l.splice_after(i);
//    printStl(l);
//    cout<<*i<<E;
//    v.assign({1,2,3});
//    printStl(v);
//    float arr[]={1.2,3.2,5.6};
//    for(auto i:arr)
//        cout<<i<<E;

    return 0;
}
