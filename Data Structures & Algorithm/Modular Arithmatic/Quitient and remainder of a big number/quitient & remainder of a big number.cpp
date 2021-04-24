#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

template<typename T>inline T division(string str,T m){T quitient=0,remainder=0,i;for(i=0;str[i];i++){quitient=quitient*10+(remainder*10+(str[i]-'0'))/m;remainder=(remainder*10+(str[i]-'0'))%m;}return remainder;}

int main()
{
    string str;
    ulli m;

    while(cin >> str >> m)
    {
        cout<<"For "<<str<<" / "<<m<<" : ";
        cout<<division(str,m)<<endl;
    }

    return 0;
}
