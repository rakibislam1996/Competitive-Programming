#include<bits/stdc++.h>
#define E "\n"

typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

/// Time complexity theta(1)
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

void left_rotation (ulli N,ulli d)
{
    cout<<E<<N<<" = ";
    binary(N);

    int V = ceil((log2(N)));

    ulli X = N >> (32 - d);
    cout<<E<<X<<" = ";
    binary(X);

    ulli Y = N << d;
    cout<<E<<Y<<" = ";
    binary(Y);

    ulli LR = Y | X;
    //ulli LR = (N >> (int(ceil(log(N))) - d)) | (N << d);

    printf("\nAfter Left Rotation.");
    cout<<E<<LR<<" = ";
    binary(LR);
}

void right_rotation (ulli N,ulli d)
{
    cout<<E<<N<<" = ";
    binary(N);

    int V = ceil((log2(N)));

    ulli X = N << (32 - d);
    cout<<E<<X<<" = ";
    binary(X);

    ulli Y = N >> d;
    cout<<E<<Y<<" = ";
    binary(Y);

    ulli RR = Y | X;
    //ulli LR = (N >> (int(ceil(log(N))) - d)) | (N << d);

    printf("\nAfter Right Rotation.");
    cout<<E<<RR<<" = ";
    binary(RR);
}

int main ()
{
    ulli N,d;

    while(scanf("%lld%lld",&N,&d)!=EOF)
    {
        left_rotation(N,d);
        printf(E);
        right_rotation(N,d);
        printf(E);
    }
    return 0;
}
