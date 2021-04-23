#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int N;

    while(cin >> N)
    {
        int p = 0, q = 0;
        int num = 1;
        if(N==0)
            return 0;
        int arr[N][N];
        int X = N;
        int s;
        if(N%2 == 0)
            s = N/2;
        else
            s = N/2+1;

        for(i = 1; i<=s; i++)
        {
            for(j = p; j<X; j++)
            {
                for(k = q; k<X; k++)
                {
                    arr[j][k] = num;
                }
            }
            num++,p++,q++,X--;
        }

        for(int t = 0; t<N; t++)
        {
            for(int y = 0; y<N; y++)
            {
                if(y == (N-1))
                    printf("%3d",arr[t][y]);
                else
                    printf("%3d ",arr[t][y]);
            }
            cout << endl;
        }
        printf("\n");
    }
    return 0;
}
