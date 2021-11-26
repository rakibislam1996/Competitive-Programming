#include<bits/stdc++.h>
using namespace std;



int main()
{
    int *p=NULL;

    int x = 10;
    int *y;
    y = &x;
    int *z;
    z = y;
    cout<<y<<" "<<*y<<" "<<&y<<endl;
    cout<<z<<" "<<*z<<" "<<&z<<endl;


    return 0;
}
