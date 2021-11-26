#include<bits/stdc++.h>
using namespace std;

void func(int *p)
{
    *p += 2;
    cout<<*p<<endl;
}
int* func4(int *x)
{
    *x += 6;
    return x;
}
int** func2(int **x)
{
    **x += 2;
    cout<<**x<<endl;
    return x;
}

int func3(int x,int y)
{
    return x+y;
}

int main()
{
    int dd = 10;
    int *d = &dd;
    d = func4(d);
    cout<<*d<<endl;
    int (*fp)(int,int) = func3;
    cout<<fp(10,12)<<endl;

    int x;
    int *p = &x;
    x = 10;
    func(p);
    cout<<*p<<" "<<x<<endl;
    func(&x);
    cout<<*p<<" "<<x<<endl;

    int **y = &p;
    int **z = func2(y);
    cout<<**z<<" "<<*p<<" "<<**y<<endl;




    return 0;
}
