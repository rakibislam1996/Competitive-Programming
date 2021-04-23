#include<iostream>
using namespace std;
int main ()
{
    long long X,M;
    long long XP;
    while(1)
    {
        cin >> X >> M;
        if(X!=0 && M!=0)
        {
            XP = X*M;
            cout<<XP<<endl;
        }
        else
            break;
    }

    return 0;
}
