#include <iostream>
using namespace std;
int lowest_set_bit(int num)
{
    int ret = num & (-num);
    return ret;
}
int main()
{
    int num = 10;
    int ans = lowest_set_bit(num);
    cout << ans << endl;
    return 0;
}
/**
This is done by using expression ‘X &(-X)’Let us see this by taking an example:Let X = 00101100.
So ~X(1’s complement) will be ‘11010011’ and 2’s complement will be (~X+1 or -X) i.e  ‘11010100’.
So if we ‘AND’ original number ‘X’ with its two’s complement which is ‘-X’, we get lowest set bit.

  00101100
& 11010100
-----------
  00000100
**/
