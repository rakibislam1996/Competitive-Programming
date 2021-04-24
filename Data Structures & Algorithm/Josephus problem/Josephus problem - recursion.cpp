#include<bits/stdc++.h>
using namespace std;

int josephus(int N,int k)
{
    if(N==1)
        return 1;
    else
        return (josephus(N-1,k)+k-1)%N+1;
}


int main()
{
    int N,k;
    while (cin>>N>>k)
    {
        cout<<"The person survived at position: "<<josephus(N,k)<<endl<<endl;
    }

    return 0;
}
