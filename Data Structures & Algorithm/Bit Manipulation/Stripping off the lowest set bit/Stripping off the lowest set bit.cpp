#include <iostream>
using namespace std;
void strip_last_set_bit(int &num)
{
    num = num & (num-1);
}
int main()
{
    int num = 7;
    strip_last_set_bit(num);
    cout << num << endl;
    return 0;
}
