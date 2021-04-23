#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    int T,N;
    for(;;)
    {
        cin >> T;
        if(T==0)
            exit(0);
        for(int i=1;i<=T;i++)
        {
           cin >> N;
           if(N%2==0)
           {
               N = ((N - 2) * 2) + 2 ;
           }
           else
           {
               N = ((N - 1) * 2) + 1;
           }
           cout << N << endl;
        }
    }
    return 0;
}

