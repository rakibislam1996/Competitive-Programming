#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main ()
{
    int N;
    cin >>N;
    int R[N],loc=0;
    for(int i=0;i<N;i++)
        cin >> R[i];
    for(int i=0;i<N-1;i++)
    {
        if(R[i]>R[i+1])
        {
            loc = i+1+1;
            break;
        }
    }
    cout<<loc<<endl;
}
