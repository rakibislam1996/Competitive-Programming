#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char S[101];
    scanf("%s",S);

    int count=0;
    for(int i=0;i<strlen(S);i++)
    {
        if(S[i]=='1')
            count++;
    }
    if(count%2==0)
        printf("%s0\n",S);
    else
        printf("%s1\n",S);

    return 0;
}
