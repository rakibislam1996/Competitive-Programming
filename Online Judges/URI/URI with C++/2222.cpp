#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        if(N==0)
            break;
        int num,value;
        set < int > S[N];
        for(int i=0; i<N; i++)
        {
            cin>>num;
            for(int j=1; j<=num; j++)
            {
                cin>>value;
                S[i].insert(value);
            }
        }
        int Set[N][61],i,j;
        set < int > :: iterator itr;
        for(i=0; i<N; i++)
        {
            Set[i][0]=S[i].size();
            for(j=1,itr = S[i].begin(); itr!=S[i].end(); itr++,j++)
            {
                Set[i][j] = *itr;
            }
        }

//        for(i=0; i<N; i++)
//        {
//            for(j=1; j<=Set[i][0]; j++)
//            {
//                cout<<Set[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//
        int op,q,x,y;
        cin>>op;
        while(op--)
        {
            int count=0;
            cin>>q>>x>>y;
            if(q==2)
            {
                for(int i=1; i<=Set[x-1][0]; i++)
                {
                    for(int j=1; j<=Set[y-1][0]; j++)
                    {
                        if(Set[x-1][i]==Set[y-1][j])
                        {
                            count++;
                            break;
                        }
                    }
                }
                cout<<(Set[x-1][0]+Set[y-1][0])-count<<endl;
            }
            else
            {
                for(int i=1; i<=Set[x-1][0]; i++)
                {
                    for(int j=1; j<=Set[y-1][0]; j++)
                    {
                        if(Set[x-1][i]==Set[y-1][j])
                        {
                            count++;
                            break;
                        }
                    }
                }
                cout<<count<<endl;
            }
        }

    }

    return 0;
}
