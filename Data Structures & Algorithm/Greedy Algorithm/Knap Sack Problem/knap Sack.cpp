#include<bits/stdc++.h>
using namespace std;

/// Time complexity: O(nlogn)

bool profitPerUnit(pair<float,float> x,pair<float,float> y)
{
    return (x.first/x.second)>(y.first/y.second);
}

int main()
{
    int items;
    cout<<"How many items: ";
    while(cin>>items)
    {
        vector< pair <float,float> > profitWithWeight;

        cout<<"Enter profit and weight for each item\n";
        for(int i=0; i<items; i++)
        {
            float profit,weight;
            cin >> profit >> weight;

            profitWithWeight.push_back(make_pair(profit,weight));
        }

        sort(profitWithWeight.begin(),profitWithWeight.end(),profitPerUnit);

//        for(int i=0; i<items; i++)
//        {
//            cout<<"Item profit: "<<profitWithWeight.at(i).first<<" Weight: "<<profitWithWeight.at(i).second<<endl;
//        }
        cout<<"Enter capacity of the knapsack: ";
        float capacity;
        cin >> capacity;

        float temp = capacity,sumWeight = 0,sumProfit = 0,noOfItems=0;

        for(int j=0; j<items && temp!=0; j++)
        {
            if(profitWithWeight.at(j).second > temp)
            {
                sumProfit += ((profitWithWeight.at(j).first/profitWithWeight.at(j).second) * temp);

                sumWeight += temp;

                profitWithWeight.at(j).second = temp;

                noOfItems++;

                break;
            }

            temp -= profitWithWeight.at(j).second;

            sumProfit += profitWithWeight.at(j).first;

            sumWeight += profitWithWeight.at(j).second;

            noOfItems++;

        }

        cout<<"\nMaximum profit: "<<sumProfit<<endl;
        cout<<"\nMaximum weight: "<<sumWeight<<endl;
        cout<<"\n"<<noOfItems<<" items taken\n";

        for(int i=0; i<noOfItems; i++)
        {
            cout<<"Item profit: "<<profitWithWeight.at(i).first<<" Weight taken: "<<profitWithWeight.at(i).second<<endl;
        }
        cout<<endl;
    }

    return 0;
}

/**
5
50 5
36 3.2
12 0.5
45 7
23 2
10.7

5
50 5
36 3.2
12 0.5
45 7
23 2
17.7

5
50 5
36 3.2
12 0.5
45 7
23 2
15

**/
