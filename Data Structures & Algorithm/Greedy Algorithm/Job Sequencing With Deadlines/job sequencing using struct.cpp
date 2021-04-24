#include<bits/stdc++.h>
using namespace std;

struct Job
{
    char id;      // Job Id
    int deadline;    // Deadline of job
    int profit;  // Profit if job is over before or on deadline
};

bool comparison(Job x,Job y)
{
    return (x.profit>y.profit);
}

int main()
{
    cout<<"How many jobs : ";
    int jobs;
    cin>>jobs;

    Job arr[jobs];

    int maxDeadline;

    char x = 'a';
    cout<<"Enter profit following by deadline of "<<jobs<<" jobs\n";
    for(int i=0; i<jobs; i++)
    {
        arr[i].id = x++;
        cout<<"Job "<<arr[i].id<<" : ";

        cin >> arr[i].profit >> arr[i].deadline;

        if(i==0)
            maxDeadline = arr[i].deadline;
        if(maxDeadline<arr[i].deadline)
            maxDeadline = arr[i].deadline;

    }

    sort(arr,arr+jobs,comparison);

    int maxProfit = 0;

    bool flag[maxDeadline+1] = {false};

    char sequence[maxDeadline+1];

    for(int i=0; i<jobs; i++)
    {
        int key = 0;
        while((arr[i].deadline-key)>=1)
        {
            if(flag[arr[i].deadline-key]==false)
            {
                maxProfit += arr[i].profit;
                flag[arr[i].deadline-key] = true;
                sequence[arr[i].deadline-key] = arr[i].id;
                break;
            }
            key++;
        }

    }
    cout<<"\nMaximum profit earned "<<maxProfit<<" with job sequence: ";
    for (int i=1; i<=maxDeadline; i++)
    {
        cout<<sequence[i]<<" ";
    }



    return 0;
}
