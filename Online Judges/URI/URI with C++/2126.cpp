#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;

int main ()
{
    char S1[128],S2[128];
    int c=0;
    while(scanf("%s%s",S1,S2)!=EOF)
    {
        //caso = caso + 1;
        int len1 = strlen(S1);
        int len2 = strlen(S2);
        int k = 0,count=0,j,position=0;

        for(int i=len2-1; i>=len1-1; i--)
        {
            if(S2[i]==S1[len1-1])
            {
                k = i-1;
                for(j=len1-2; j>=0; j--,k--)
                {
                    if(S2[k]!=S1[j])
                    {
                        break;
                    }
                }
                if(j == -1)
                {
                    count++;
                    if(count==1)
                        position = k+1;
                }
            }
        }
        c++;
        cout<<"Caso #"<<c<<":\n";
        if(count==0)
            cout<<"Nao existe subsequencia\n\n";
        else
        {
            cout<<"Qtd.Subsequencias: "<<count<<endl;
            cout<<"Pos: "<<position+1<<endl<<endl;
        }
    }
    return 0;
}
