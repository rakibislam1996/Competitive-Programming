#include<bits/stdc++.h>
#define E "\n"
#define sc scanf
#define pf printf
#define pb push_back
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

vector <ulli> arr;
ulli s,cow;

bool fun(ulli mid)
{
    ui count = 1;
    ulli j = 0;
    for (ulli i=1; i<s; i++)
    {


        if((arr[i] - arr[j]) >= mid)
        {
            //cout<<arr[i] <<" "<< arr[j]<<endl;
            count++;

            j = i;
        }
        if(count==cow)
            return true;
    }
    return false;
}

ulli binarySearch(ulli low,ulli high)
{
    ulli mid = low + ((high-low)>>1);

    ulli result=mid;

    while(low<=high)
    {
        //cout<<"mid = "<<mid<<" low = "<<low<<" high = "<<high<<endl;
        if(fun(mid))
        {
            low = mid+1;
            result = mid;
          //  cout<<"ekhane dhukse\n";
        }
        else
        {
            high = mid-1;
        }
        //cout<<"mid = "<<mid<<" low = "<<low<<" high = "<<high<<endl;

        mid = low + ((high-low)>>1);

    }
    return result;
}

template<class T>inline void input(T &x){
    x=0;
    bool neg=false;
    register char c = getchar();
    while ((c<48 || c>57) && c!=EOF && c!='-') c = getchar();
    if (c == '-'){
        neg = true; c = getchar();
    }
    while (c>=48 && c<=57){
        x = (x<<3) + (x<<1) + c - 48;c = getchar();
    }
    if (neg) x = ~(x-1);
}
template<class T> inline void output(T x){
    char a[21];T i=1, j;
    if (x < 0){
        putchar('-');x = ~(x-1);
    }
    if (x==0) putchar('0');
    while (x){
        a[i++] = x%10 + 48; x /= 10;
    }
    for (j=i-1; j>=1; j--) putchar(a[j]);
}
int main ()
{
    ios::sync_with_stdio(false);//cin.tie();
    int T;
    input(T);
    //cin >> T;
    //sc("%d",&T);

    while(T--)
    {
        input(s);input(cow);
        //cin >> s >> cow;
        //sc("%lld%lld",&s,&cow);

        ulli temp;
        for (ulli i=0; i<s; i++)
        {
            input(temp);
            //cin >> temp;
            //sc("%lld",&temp);
            arr.pb(temp);
        }

        sort(arr.begin(),arr.end());

        output(binarySearch(arr[0],arr[s-1]));
        putchar('\n');
        //pf("%lld\n",binarySearch(arr[0],arr[s-1]));
        //cout<<binarySearch(arr[0],arr[s-1])<<E;
        arr.clear();
    }

    return 0;
}
