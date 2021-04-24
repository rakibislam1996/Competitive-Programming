#include<bits/stdc++.h>
#define E "\n"
#define mod 1000000007
typedef unsigned int ui;
typedef long long int lli;

using namespace std;

// Time complexity O(b/4); b = number of bits (grouped by 4 bits each)
// Space complexity O(2^4)

//Index   = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
//ui Table[] = {0,1,1,2,1,2,2,3,1,2, 2, 3, 2, 3, 3, 4};

//bool isLucky(lli n)
//{
//
//    ui count = 0;
//
//    while(n)
//    {
//        count += Table[n & 0xF];
//        n >>= 4;
//        if(count>2)
//            return false;
//    }
//    if(count==2)
//        return true;
//    else
//        return false;
//}

//bool isLucky(lli n)
//{
//
//    ui count = 0;
//
//    while(n)
//    {
//        n = n & (n-1);
//        count++;
//        if(count>2)
//            return false;
//    }
//    if(count==2)
//        return true;
//    else
//        return false;
//}

int main ()
{
    ui T;
    scanf("%u",&T);
    while(T--)
    {
        lli N, sum = 0;
        scanf("%lld",&N);

        for(lli i=4;i<=N-1;i <<= 1)
        {
            if(i == (N-1))
            {
                sum = sum + ((i+1) % mod);
            }
            else
            {
                sum = sum + ((i+1) % mod) + ((i+2) % mod);
            }
        }
        if(N>=3)
            sum += 3;
        printf("%lld\n",sum);
    }

    return 0;
}
