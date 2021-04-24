#include<bits/stdc++.h>
#define E "\n"
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity omega(number of bits)
/// Space complexity O(1)

void findSparse(ulli M)
{
    vector <int> binary;

    cout<<"The given number is      : "<<M<<" = ";

    ///Converting integer in its binary equivalent, pushing into vector in reverse order
    while(M)
    {
        binary.push_back(M & 1);
        M >>= 1;
    }

    /// Adding 0 at the end because if one more bit is needed

    binary.push_back(0);

    ui binarySize = binary.size();

    /// Showing the binary equivalent in reverse order with additional 0

    for(int i=binarySize-1; i>=0; i--)
        cout<<binary.at(i)<<"  ";

    /// For unsetting bit position from ith position to last_final position

    int last_final = 0;

    for(int i=1; i<binarySize-1; i++)
    {
        if(binary.at(i-1)==1 && binary.at(i)==1 && binary.at(i+1)!=1)
        {
            binary.at(i+1) = 1;

            for(int j=i; j>=last_final; j--)
                binary.at(j) = 0;
            last_final = i+1;
        }

    }

    /// Making decimal equivalent of the resultant binary number of previous approach
    /// which is the required sparse number

    ulli sparse = 0;

    for(int i=0; i<binarySize; i++)
        sparse += binary.at(i) * (1<<i);

    cout<<"\nThe next sparse number is: "<<sparse<<" = ";;

    /// Showing the binary equivalent of the sparse number

    for(int i=binarySize-1; i>=0; i--)
        cout<<binary.at(i)<<"  ";

    cout<<E<<E;

}

int main ()
{
    ulli N;
    while(scanf("%lld",&N)!=EOF)
    {
        findSparse(N);
    }

    return 0;
}

/**

N = 173 = 1 0 1 0 1 1 0 1

          0 1 2 3 4 5 6 7 8
Binary =  1 0 1 1 0 1 0 1 0 (Reverse of N with 0 at the last position)

1st Step :Making 4th to 1 and 3th up to 0th to 0
          0 0 0 0 1 1 0 1 0

2nd Step :Making 6th to 1 and 5th up to 4th to 0
          0 0 0 0 0 0 1 1 0

Final Step :Making 8th to 1 and 7th up to 6th to 0
          0 0 0 0 0 0 0 0 1

The next sparse number is = 1 0 0 0 0 0 0 0 0 (Reverse of final step ) = 256


N = 93 =  1 0 1 1 1 0 1

          0 1 2 3 4 5 6 7
Binary =  1 0 1 1 1 0 1 0    (Reverse of N with 0 at the last position)

1st Step :Making 5th to 1 and 4th up to 0th to 0
          0 0 0 0 0 1 1 0

Final Step :Making 7th to 1 and 6th up to 5th to 0
          0 0 0 0 0 0 0 1

The next sparse number is = 1 0 0 0 0 0 0 0 (Reverse of final step ) = 128

**/
