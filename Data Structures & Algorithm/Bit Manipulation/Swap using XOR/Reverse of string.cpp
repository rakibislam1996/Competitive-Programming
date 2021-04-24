#include <bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

/// Time complexity theta(length of string)
/// Space complexity theta(1)

int main()
{
    string X;
    while(getline(cin,X))
    {
        cout<<"Before reversing: X = "<<X<<E<<E;

        int startIndex = 0,endIndex = X.length()-1;
        cout<<startIndex<<"  "<<endIndex<<E;
        while(startIndex < endIndex)
        {
            X[startIndex] = X[startIndex] ^ X[endIndex];
            X[endIndex] = X[endIndex] ^ X[startIndex];
            X[startIndex] = X[startIndex] ^ X[endIndex];
            startIndex++;
            endIndex--;
        }
        cout<<"After reversing : X = "<<X<<E<<E;
    }
    return 0;
}

/**

X = a , Y = b

X = X ^ Y = a ^ b
Y = Y ^ X = b ^ (a ^ b) = a ^ (b ^ b) = a ^ 0 = a
X = X ^ Y = (a ^ b) ^ a = b ^ (a ^ a) = b ^ 0 = b

**/
