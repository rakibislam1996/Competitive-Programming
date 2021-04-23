#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double X;
    char s[200];
    scanf("%LE", &X);

    sprintf(s, "%LE", X);
    if(s[0] != '-')
        cout << "+";
    printf("%.4LE\n", X);
    return 0;
}
