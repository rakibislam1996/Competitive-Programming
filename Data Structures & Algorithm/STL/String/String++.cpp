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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);

    /** Declaration **/
    /**
    string s1("This is a string class");
    cout<<s1<<E;

    string s2(s1);
    cout<<s2<<E;

    string s3(s1,10,6);
    cout<<s3<<E;

    string s4(s1.begin(),s1.begin()+7);
    cout<<s4<<E;

    auto it = s1.begin();
    advance(it,10);
    auto it2 = s1.begin();
    advance(it2,22);

    string s5(it,it2);
    cout<<s5<<E;

    string s6 = s1;
    cout<<s6<<E;

    string s7(5,'B');
    cout<<s7<<E;
    **/
    /**____________________________________**/

    /** Input Output **/
    /**
    string s8;

    getline(cin,s8);
    cout<<s8<<E;
    **/
    /**____________________________________**/


    /** Algorithms **/


    /** insert **/
    /**
    string s9("My Name is Rakib");
    string s10("Md. Rakibul Islam ");

    ///s9.insert(11,s10);
    ///s9.insert(11,s10,4,7);

    auto i = s9.begin();
    advance(i,11);
    auto j = s10.begin();
    advance(j,4);
    auto k = s10.begin();
    advance(k,12);
    s9.insert(i,j,k);

    cout<<s9<<E;

    s9 = "My Name is Rakib";
    s9.insert(3,"All Three Part ",10);
    cout<<s9<<E;

    s9.insert(4,5,'*');
    cout<<s9<<E;

    j = s9.begin();
    advance(j,4);
    s9.insert(j,5,'&');
    cout<<s9<<E;

    **/
    /**____________________________________**/

    /** erase **/
    /**
    string s11("My Name is Rakib");

    s11.erase(11,8);
    cout<<s11<<E;

    auto i = s11.begin();
    advance(i,3);
    auto k = s11.begin();
    advance(k,8);
    s11.erase(i,k);
    cout<<s11<<E;

    string s12("abcdefghijklmnopqrstuvwxyz");

    s12.erase(s12.begin(),s12.begin()+5);
    ///s11.erase(s11.begin()+5,s11.end()-5);
    cout<<s12<<E;

    s12= "Five * Star";
    i = s12.begin();
    advance(i,5);
    s12.erase(i);
    cout<<s12<<E;

    s12.erase(5);
    cout<<s12<<E;

    **/
    /**____________________________________**/

    /** Append **/
    /**
    string s13("My Name "),s14("Is ");

    s13.append(s14);

    cout<<s13<<E;

    s13.append("Md. ");
    cout<<s13<<E;

    string s15("Md. Rakibul Islam Rakib");
    s13.append(s15,4,8);
    cout<<s13<<E;

    s13.append(s15.begin()+12,s15.end());
    cout<<s13<<E;

    s13.append(5,'*');
    cout<<s13<<E;

    s13.append("Five Star",6);
    cout<<s13<<E;
    **/
    /**____________________________________**/

    /** Replace **/
    /**
    string s14("abcde fghij klmno");
    string s15("pqrst uvwxyz ABCDE");

    s14.replace(6,5,"FGHIJ");
    cout<<s14<<E;

    s14.replace(6,5,s15,0,5);
    cout<<s14<<E;

    s15.replace(6,5,"PQRST UVWXYZ",5);
    cout<<s15<<E;

    s15.replace(6,5,4,'*');
    cout<<s15<<E;

    s14="ABCDE FGHIJ KLMNO";
    s15="abcde fghij klmno";
    string s16("01234 56789 98756");

    auto i = s14.begin();
    advance(i,6);
    auto j = s14.begin();
    advance(j,11);

    s14.replace(i,j,s16);
    cout<<s14<<E;

    s14.replace(s14.begin()+6,s14.begin()+11,"00000000",5);
    cout<<s14<<E;

    s15.replace(s15.begin()+6,s15.begin()+11,5,'+');
    cout<<s15<<E;

    s15.replace(s15.begin()+6,s15.begin()+11,s16.begin()+6,s16.begin()+10);
    cout<<s15<<E;
    string s17;

    **/
    /**____________________________________**/

    /** Assign **/
    /**
    string s18("abcd"),s19("cdefg");

    s18.assign(s19);
    cout<<s18<<E;

    s18.assign("cdefg",3);
    cout<<s18<<E;

    s18.assign(s19,0,3);
    cout<<s18<<E;

    s18.assign(s19.begin()+1,s19.begin()+4);
    cout<<s18<<E;

    **/
    /**____________________________________**/


    /** Substr **/
    /**
    string s22("This is a good waste of time");

    string s23;

    s23 = s22.substr(5,2);
    cout<<s23<<E;

    s23 = s22.substr(5);
    cout<<s23<<E;

    **/
    /**____________________________________**/

    /** Reverse Sort Unique **/
    /**
    string s24("12300 126900");

    reverse(s24.begin(),s24.end());
    cout<<s24<<E;

    sort(s24.begin(),s24.end());
    cout<<s24<<E;

    s24.erase(unique(s24.begin(),s24.end()),s24.end());
    cout<<s24<<E;

    **/
    /**____________________________________**/


    /** Find **/
    /**
    string s20("first second third six second seven");
    string s21("first");
    int pos;
    char str[20] = "first";
    pos = s20.find(s21);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s20.find(s21,3);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s20.find("six seven",4,3);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s20.find('v',33);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;
    **/
    /**____________________________________**/

    /** rfind **/
    /**
    string s20("first second third six second seven");
    string s21("second");
    pos = s20.rfind(s21);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s20.rfind("second",s20.length()-13);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s20.rfind("six seven",s20.length()-5,4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;
    pos = s20.rfind('v',31);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    **/
    /**____________________________________**/

    /** find_first_of **/

    /**
    string s25("first second third six second seven");
    string s26("second");

    int pos = s25.find_first_of(s26);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_of(s26,s25.length()-11);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_of("six seven",s25.length()-5,4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_of('s');
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_of('s',4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;


    **/
    /**____________________________________**/

    /** find_last_of **/

    /**
    string s25("first second third six second seven");
    string s26("second");

    int pos = s25.find_last_of(s26);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_of(s26,s25.length()-11);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_of("six seven",s25.length()-5,4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_of('s');
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_of('s',2);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;


    **/
    /**____________________________________**/


    /** find_first_not_of **/

    /**
    string s25("first second third six second seven");
    string s26("second");

    int pos = s25.find_first_not_of(s26);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_not_of(s26,11);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_not_of("six seven",5,4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_not_of('s');
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_first_not_of('s',2);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;


    **/
    /**____________________________________**/

    /** find_last_not_of **/

    /**
    string s25("first second third six second seven");
    string s26("second");

    int pos = s25.find_last_not_of(s26);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_not_of(s26,11);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_not_of("six seven",5,4);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_not_of('s');
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    pos = s25.find_last_not_of('s',2);
    if(pos!=string::npos)
        cout<<"Substring found at position "<<pos<<E;
    else
        cout<<"Substring did not found"<<E;

    **/
    /**____________________________________**/

    /** compare **/

    /**

    string s1("23");
    string s2("12345");

    int value = s1.compare(s2);

    if(value==0)
        cout<<"Same\n";
    else if(value>0)
        cout<<"S1 is greater\n";
    else
        cout<<"S1 is smaller\n";

    value = s1.compare(2,4,s2);

    if(value==0)
        cout<<"Same\n";
    else if(value>0)
        cout<<"S1 is greater\n";
    else
        cout<<"S1 is smaller\n";

    value = s1.compare(2,4,"1234",3);

    if(value==0)
        cout<<"Same\n";
    else if(value>0)
        cout<<"S1 is greater\n";
    else
        cout<<"S1 is smaller\n";

    value = s1.compare(2,4,s2,2,3);

    if(value==0)
        cout<<"Same\n";
    else if(value>0)
        cout<<"S1 is greater\n";
    else
        cout<<"S1 is smaller\n";

    **/
    /**____________________________________**/

    /** String class <-> c-style string conversion **/
    /**
    string s19="abcde fghij";

    char str[80]="jhgbjh kjskhf";
    cout<<str<<E<<strlen(str)<<E;

    strcpy(str,s19.c_str());  /// string class to c-style string conversion
    cout<<str<<" "<<strlen(str)<<E<<s19<<" "<<s19.length()<<E;

    char str1[80]="ABCDE kjskhf";
    s19 = "12345";            /// c-style string to string class conversion
    s19 = str1;
    cout<<str1<<" "<<strlen(str1)<<E<<s19<<" "<<s19.length()<<E;
    **/
    /**____________________________________**/


    return 0;
}
