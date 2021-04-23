#include<iostream>
using namespace std;
int main ()
{
    int N,M;
    cin >> N >> M;
    int terrain[N][1000];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> terrain[i][j];

    int i,j,k;

    for(i=0; i<=N-3; i++)
    {
        for(j=0; j<=M-3; j++)
        {
            if(terrain[i][j]==7 && terrain[i][j+1]==7 && terrain[i][j+2]==7)
            {
                if(terrain[i+1][j]==7 && terrain[i+1][j+2]==7 && terrain[i+1][j+1]==42)
                {
                    if(terrain[i+2][j]==7 && terrain[i+2][j+1]==7 && terrain[i+2][j+2]==7)
                    {
                        cout<<i+1+1<<" "<<j+1+1<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<0<<" "<<0<<endl;
    return 0;
}
