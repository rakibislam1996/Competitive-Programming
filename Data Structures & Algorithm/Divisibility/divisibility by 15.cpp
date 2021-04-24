#include<bits/stdc++.h>
using namespace std;

bool isDivisible(string s)
{

    int length = s.length();


    cout<<accumulate(begin(s), end(s), 0)<<endl;
    //int sum = accumulate(begin(s), end(s), 0) - ('0' * length);

    return true;
}



int main()
{
    string s ;
    while(cin >> s)
    {
        isDivisible(s)? cout<<"Yes\n" : cout<<"No\n";
    }

    return 0;
}
