#include<bits/stdc++.h>
using namespace std;

const int r=3,c=3;

int** getArray() ///int** getArray(int** arr)
{
    int** arr = new int*[r];  /// arr = new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
        for(int j=0;j<c;j++)
        {
            arr[i][j] = i+j+5;
        }
    }
    return arr;
}

void printArray(int **arr)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int **arr;

    arr = getArray();

    printArray(arr);

    return 0;
}
