#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity O(n^2)
/// Space complexity theta(1)

stack <ulli> bin;
void binary(ulli M)
{
    if(M>=1)
    {
        bin.push(M);
        binary(M>>1);
    }
    else
    {
        while(!(bin.empty()))
        {
            printf("%lld ",bin.top()%2);
            bin.pop();
        }
    }
}

/// We just have to find number of set bits in a ^ b to find bit difference

ulli setCount(lli a,lli b)
{
    ulli c = a ^ b;
    ui count = 0;
    while(c)
    {
        c = c & (c-1);
        count++;
    }
    return count;
}

void sumOfPairs(lli arr[],ulli N)
{
    ui totalCount = 0,pairCount;
    for(ulli i=0;i<N;i++)
    {
        for(ulli j=0;j<N;j++)
        {
            /// Showing the element to be compared with other elements
            cout<<"\narr["<<i<<"] = "<<arr[i]<<" = ";
            binary(arr[i]);

            /// Showing the element to be compared with the previous one
            cout<<"\narr["<<j<<"] = "<<arr[j]<<" = ";
            binary(arr[j]);

            /// Not performing any operation of bit difference of similar element
            if(i==j)
            {
                cout<<"\nBit defference  =  "<<0<<E<<E;
                continue;
            }

            pairCount = setCount(arr[i],arr[j]);
            cout<<"\nBit defference  =  "<<pairCount<<E<<E;

            totalCount += pairCount;
        }
    }
    cout<<"\nSum of bit differences = "<<totalCount<<E;
}

int main ()
{
//    cout<<log2(INT_MAX)<<E<<E;
//    cout<<log2(UINT_MAX)<<E<<E;
//    cout<<log2(LLONG_MAX)<<E<<E;
//    cout<<log2(ULLONG_MAX)<<E<<E;


    ulli N;

    while(scanf("%lld",&N)!=EOF)
    {
        lli arr[N];
        for(int i=0;i<N;i++)
            scanf("%lld",&arr[i]);

        sumOfPairs(arr,N);
        printf(E);
    }
    return 0;
}
