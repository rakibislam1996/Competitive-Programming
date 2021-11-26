#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={5,6,7,8};

    int *a = arr;
    cout<<*(arr+2)<<endl;

    for(int i=0;i<4;a++,i++)
    {
        cout<<a<<" -> "<<*a<<endl;
    }



    return 0;
}
