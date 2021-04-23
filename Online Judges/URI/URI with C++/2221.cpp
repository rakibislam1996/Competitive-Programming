#include<iostream>
using namespace std;
int main ()
{
    int T,B,A[2],D[2],L[2],V[2];
    cin>>T;
    while(T--)
    {
        cin>>B>>A[0]>>D[0]>>L[0]>>A[1]>>D[1]>>L[1];
        if(L[0]%2==0)
            V[0] = ((A[0]+D[0])/2.0)+B;
        else
            V[0] = (A[0]+D[0])/2.0;
        if(L[1]%2==0)
            V[1] = ((A[1]+D[1])/2.0)+B;
        else
            V[1] = (A[1]+D[1])/2.0;
        if(V[0]>V[1])
            cout<<"Dabriel"<<endl;
        else if(V[0]<V[1])
            cout<<"Guarte"<<endl;
        else
            cout<<"Empate"<<endl;
    }

    return 0;
}
