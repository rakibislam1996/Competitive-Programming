#include<bits/stdc++.h>
#define E "\n"

typedef long long int lli;
using namespace std;

/// Time complexity O(n * 2^n)
/// Space complexity O(1)

void powerSet(int arr[],int n)
{

///    size_t noOfPowerSet = pow(2,n);

    size_t noOfPowerSet = 1<<n;

    cout<<"NULL\n";
    for(int counter=1; counter< noOfPowerSet; counter++)
    {
        for(int j=0; j< n; j++)
        {
            if(counter & (1<<j))
                cout<<arr[j];
        }
        cout<<E;
    }
    cout<<E;
}

int main ()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        powerSet(arr,n);
    }

    return 0;
}
/**
arr[]= {1, 3, 6}

noOfPowerSet = 1 << 3 = 8

counter = 1 =  1
j=0; 1<<j   =  1
             &___
               1      print  arr[j] = 1

counter = 1 =  0 1
j=1; 1<<j   =  1 0
             &_____
               0 0

counter = 1 =  0 0 1
j=2; 1<<j   =  1 0 0
             &______
               0 0 0
________________________________

counter = 2 =  1 0
j=0; 1<<j   =  0 1
             &_____
               0 0

counter = 2 =  1 0
j=1; 1<<j   =  1 0
             &_____
               1 0    print  arr[1] = 3

counter = 2 =  0 1 0
j=2; 1<<j   =  1 0 0
             &_______
               0 0 0
________________________________


counter = 3 =  1 1
j=0; 1<<j   =  0 1
             &_____
               0 1    print  arr[0] = 1

counter = 3 =  1 1
j=1; 1<<j   =  1 0
             &_____
               1 0    print  arr[1] = 3

counter = 3 =  0 1 1
j=2; 1<<j   =  1 0 0
             &_______
               0 0 0
________________________________

counter = 4 =  1 0 0
j=0; 1<<j   =  0 0 1
             &_______
               0 0 0

counter = 4 =  1 0 0
j=1; 1<<j   =  0 1 0
             &_______
               0 0 0

counter = 4 =  1 0 0
j=2; 1<<j   =  1 0 0
             &_______
               1 0 0    print  arr[2] = 6
________________________________

counter = 5 =  1 0 1
j=0; 1<<j   =  0 0 1
             &_______
               0 0 1    print  arr[0] = 1

counter = 5 =  1 0 1
j=1; 1<<j   =  0 1 0
             &_______
               0 0 0

counter = 5 =  1 0 1
j=2; 1<<j   =  1 0 0
             &_______
               1 0 0    print  arr[2] = 6
________________________________

counter = 6 =  1 1 0
j=0; 1<<j   =  0 0 1
             &_______
               0 0 0

counter = 6 =  1 1 0
j=1; 1<<j   =  0 1 0
             &_______
               0 1 0    print  arr[1] = 3

counter = 6 =  1 1 0
j=2; 1<<j   =  1 0 0
             &_______
               1 0 0    print  arr[2] = 6
________________________________

counter = 7 =  1 1 1
j=0; 1<<j   =  0 0 1
             &_______
               0 0 1    print  arr[0] = 1

counter = 7 =  1 1 1
j=1; 1<<j   =  0 1 0
             &_______
               0 1 0    print  arr[1] = 3

counter = 7 =  1 1 1
j=2; 1<<j   =  1 0 0
             &_______
               1 0 0    print  arr[2] = 6
________________________________



**/
