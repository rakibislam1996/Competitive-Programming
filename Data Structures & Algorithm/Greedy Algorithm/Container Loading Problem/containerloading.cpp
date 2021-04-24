#include<bits/stdc++.h>
using namespace std;

/// Time complexity : O(nlogn)

int main ()
{
    cout << "Enter capacity :";
    int c;
    cin >> c;
    int num;
    cout << "How many containers : ";
    cin >>num;

    int arr[num];

    cout << "Enter weight(s) of the containers :\n";

    int sum=0;

    for(int i=0; i<num; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if(sum <= c)
    {
        cout<<"All the given containers can be loaded\n";
        return 0;
    }

    sort(arr,arr+num);

    int count;

    for(int i=num-1; i>=0; i--)
    {
        sum -= arr[i];
        if(sum > c)
            continue;
        else
        {
            sum += arr[i];
            count = i;

            break;
        }
    }

    int max = 0,x;

    for(int i=count; i>=0; i--)
    {


        if(max < (sum-arr[i]) && (sum-arr[i]) <= c)
        {


            max = sum-arr[i];

            x = i;

            if(max == c)
                break;
        }
    }

    cout<<count<<" can be loaded\n";

    for(int i=0; i<=count; i++)
    {
        if(i==x)
            continue;
        else
            cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
