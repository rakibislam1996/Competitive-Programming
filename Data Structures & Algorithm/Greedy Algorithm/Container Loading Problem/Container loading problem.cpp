#include<bits/stdc++.h>
using namespace std;

/// Time complexity : O(nlogn)

int main ()
{
    cout << "Enter capacity :";
    int capacity;
    while(cin >>capacity)
    {
        int num;
        cout << "How many containers : ";
        cin >>num;

        int containerWeight[num];

        cout << "Enter weight(s) of the containers :\n";

        int sumOfWeights=0;

        for(int i=0; i<num; i++)
        {
            cin >> containerWeight[i];
            sumOfWeights += containerWeight[i];
        }

        if(sumOfWeights <= capacity)
        {
            cout<<"All the given containers can be loaded\n";
            continue;
        }

        sort(containerWeight,containerWeight+num);

        int possibleNoOfContainers;

        for(int i=num-1; i>=0; i--)
        {
            sumOfWeights -= containerWeight[i]; /// Decrementing weight from the sum of weight beginning from the maximum weight
            if(sumOfWeights < capacity)         /// Finding the last weight for which the sum of weight crosses capacity
            {
                sumOfWeights += containerWeight[i]; /// Adding the weight for which the sum of weight crosses capacity
                possibleNoOfContainers = i;     /// ith weight is the the weight for which the sum of weight crosses capacity
                                                /// and also (i-1) will be the number of containers which can be loaded
                break;
            }
        }

        int largest = 0,weightToDiscard;

        for(int i=possibleNoOfContainers; i>=0; i--)
        {
            /// Whether discarding ith weight make the "sum of weights" closest to the capacity
            /// That is finding the maximum "sum of weights" which is closest to the capacity
            /// but also checking "sum of weights" not to crossing over the capacity

            if(largest < (sumOfWeights-containerWeight[i]) && (sumOfWeights-containerWeight[i]) <= capacity)
            {
                /// maximum "sum of weights" is found so far by discarding the ith weight

                largest = sumOfWeights-containerWeight[i];

                weightToDiscard = i;

                if(largest == capacity) /// If the maximum "sum of weights" that found so far is equal to capacity then its the most optiaml solution
                    break;
            }
        }

        cout<<possibleNoOfContainers<<" can be loaded, weighing :\n";

        for(int i=0; i<=possibleNoOfContainers; i++)
        {
            if(i==weightToDiscard)
                continue;
            else
                cout<<containerWeight[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
