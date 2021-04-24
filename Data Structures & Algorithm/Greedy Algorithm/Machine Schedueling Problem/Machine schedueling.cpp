#include<bits/stdc++.h>
using namespace std;

/// Time complexity : O(n^2)
int main()
{
    cout<<"How many tasks: ";
    int tasks;
    while(cin>>tasks)
    {
        vector< pair <int,int> > timeLimit;

        for(int i=0; i<tasks; i++)
        {
            int initialTime,lastTime;
            cin >> initialTime >> lastTime;
            timeLimit.push_back(make_pair(initialTime,lastTime));
        }

        sort(timeLimit.begin(),timeLimit.end());

        int noOfMachine = 0;

        vector< pair <int,int> > :: iterator it1,it2;

        it1 = timeLimit.begin();

        vector< pair <int,int> > machine[tasks];

        while(true)                  /// Iterates until 1 or no task is remaining
        {
            int x = (*it1).second;   /// x will be the terminating time of the 1st task that is assigned to a new machine

            timeLimit.erase(it1);    /// Erasing the 1st task that is assigned to the machine considering that this task is completed

            machine[noOfMachine].push_back(make_pair((*it1).first,(*it1).second));


            for(int j = timeLimit.size(); j>=1; j--) /// Iterates the tasks followed by the previously erased task
            {
                if(x <= (*it1).first)   /// Whether the (*it1)th task is eligible for the current machine for assignment
                {
                    x = (*it1).second;  /// (*it1)th task will be the new task for the current machine

                    machine[noOfMachine].push_back(make_pair((*it1).first,(*it1).second));

                    timeLimit.erase(it1); /// Erasing the (*it1)th task considering that this task is completed

                }
                else
                    it1++;
            }

            noOfMachine++;

            if(timeLimit.size()==1 )  /// If only one task is remained then a new and last machine is required
            {

                machine[noOfMachine].push_back(make_pair((*it1).first,(*it1).second));
                noOfMachine++;
                break;
            }
            else if(timeLimit.size()==0 ) /// /// If no task is remained then the requirement is fulfilled
                break;

            it1 = timeLimit.begin();
        }
        cout<<"\nMinimum number of machine(s) required: "<<noOfMachine<<endl;
        for (int i=0; i<noOfMachine; i++)
        {
            cout<<"\nMachine No: "<<i+1<<" Assigned tasks\n";
            for (int j=0; j<machine[i].size(); j++)
                cout<<machine[i].at(j).first<< " "<<machine[i].at(j).second<<endl;
            cout<<endl;
        }
    }

    return 0;
}

/**
7
0 2
1 5
3 7
4 7
6 8
7 10
9 11

7
0 2
1 5
3 7
5 6
6 8
7 10
9 11

5
1 7
2 7
3 7
4 7
5 7

**/
