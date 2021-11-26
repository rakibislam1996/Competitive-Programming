#include<bits/stdc++.h>
using namespace std;

int* func()
{
    int* x = (int*)malloc(sizeof(int));
    *x = 101;
    return x;
}

int main()
{
    int *p;
    p = (int*)malloc(4);
    *p = 6;
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    free(p);
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    p = NULL;
    cout<<p<<" "<<&p<<endl;
    int *q;
    q = (int*)malloc(sizeof(int));
    *q = 10;
    cout<<*q<<" "<<q<<" "<<&q<<endl;

    cout<<*func()<<endl;

    return 0;
}
