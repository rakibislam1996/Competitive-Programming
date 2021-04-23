#include<iostream>
using namespace std;
int main ()
{
    int N;
    cin >> N;

    int arr[N+1][101];
    for(int i=0; i<=N; i++)
        for(int j=0; j<=N; j++)
            cin >> arr[i][j];

    int i,j;

    for(i=0; i<=N-1; i++)
    {
        for(j=0; j<=N-1; j++)
        {
            if((arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1])>=2)
                cout<<"S";
            else
                cout<<"U";
        }
        cout<<endl;
    }
    return 0;
}
