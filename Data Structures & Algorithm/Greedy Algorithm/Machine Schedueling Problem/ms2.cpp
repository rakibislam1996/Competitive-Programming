#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of task: ";
    cin >> n;
    int task[n+1];
    for(int i = 0; i < n; i++)
        task[i] = i;
    cout<<"Please enter the initial and finishing time for "<<n<<" tasks:\n";
    int start[n+1];
    int finish[n+1];
    char id = 'a';
    for(int i = 0; i < n; i++)
    {
        cout<<"Task "<<id++<<" : ";
        cin >> start[i] >> finish[i];
    }
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(finish[i]>finish[j])
            {
                swap(task[i],task[j]);
                swap(start[i],start[j]);
                swap(finish[i],finish[j]);
            }
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(finish[i]==finish[j])
                if(start[i]>start[j])
                {
                    swap(task[i],task[j]);
                    swap(start[i],start[j]);
                    swap(finish[i],finish[j]);
                }
    int machine[MAX][n],m[MAX]={0},state[n]={0},count = 0,noOfMachine=0,temp;
    while(true)
    {
        temp = 0;
        for(int j = 0; j < n; j++)
            if(state[j]==0&&temp<=start[j])
            {
                machine[noOfMachine][m[noOfMachine]++] = task[j];
                state[j] = 1;
                temp = finish[j];
                count++;
            }

        if(count==n)
            break;
        noOfMachine++;
    }
    cout<<"Solution:\n";
    for(int i = 0; i <= noOfMachine; i++)
    {
        cout<<"Machine "<<i+1<<": ";
        for(int j = 0; j < m[i]; j++)
            printf("%c ",machine[i][j]+'a');
        cout<<endl;
    }
    return 0;
}
