#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int *p = &x;
    x = 10;
    int **y = &p;

    x++;
    cout<<" &x= "<<&x<<" p= "<<p<<" &p= "<<&p<<" *p= "<<*p<<" y= "<<y<<" *y= "<<*y;
    cout<<" **y= "<<**y<<" &y ="<<&y<<endl;

    (*y)++;

    cout<<" &x= "<<&x<<" p= "<<p<<" &p= "<<&p<<" *p= "<<*p<<" y= "<<y<<" *y= "<<*y;
    cout<<" **y= "<<**y<<" &y ="<<&y<<endl;



    return 0;
}
