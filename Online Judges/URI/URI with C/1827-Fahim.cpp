#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    int n;
    while (cin >> n)
    {
        int arr[n][n];

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                arr[i][j] = 0;
        }

        for(int i = 0; i<n; i++)
            arr[i][i] = 2;

        for(int i = 0,j = n-1; i<n; i++,j--)
            arr[i][j] = 3;

        int c = n/3;
        int z = n - (2*c);
        int x,y;

        for(int i = c, x = 1; x<=z ; i++,x++)
        {
            for(int j = c, y = 1; y<=z ; j++,y++)
            {
                arr[i][j] = 1;
            }
        }


        if(n%2==1) p=n/2;
        else p=(n/2)-1;
        arr[p][p]=4;


        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
         cout << endl;

    }
    return 0;
}
