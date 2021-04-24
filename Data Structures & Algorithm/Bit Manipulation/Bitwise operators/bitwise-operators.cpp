#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    cout << (5 & 6) <<endl;
    cout << (5 | 2)<<endl;
    cout << (5 ^ 7) <<endl;
    cout << ~(5) <<endl;
    cout << (5 << 2) <<endl;
    cout << (254 >> 4) <<endl;
    cout << (254 & 0xF) <<endl;
    return 0;
}
