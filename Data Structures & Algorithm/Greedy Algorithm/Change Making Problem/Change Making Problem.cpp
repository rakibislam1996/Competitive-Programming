#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

/// Time complexity O(nlogn)

int main ()
{
    int coinTypes;

    while(cin >>coinTypes)
    {
        int coin[coinTypes];

        cout << "Enter all coin : ";
        for(int i=0; i<coinTypes; i++)
            cin >>coin[i];

        sort(coin,coin+coinTypes);

        cout << "Enter amount to be changed : ";
        int money;
        cin >> money;

        vector< pair<int,int> >v1,v2;

        int possibleChanges = 0,noOfChanges = MAX,sum = money;

        for(int i=coinTypes-1; i>=0; i--)
        {
            if(coin[i]==money)                     /// whether an available coin is equivalent to the given money
            {
                cout << "\nNumber of coin(s): 1";
                cout << "Change(s): "<<coin[i]<<endl;
                return 0;
            }

            if(coin[i]<money)                     /// whether an available coin is less than to the given money
            {
                sum -= coin[i];
                possibleChanges = 1;              /// Initializing the number of possible changes
                v1.push_back(make_pair(coin[i],1)); /// coin[i] is the current available coin,1 is the frequency
            }
            else
                continue;

            int j = coinTypes-1;

            while(sum >= 0 && j>=0)
            {
                if(coin[j] > sum)             /// whether an available coin is greater than the remaining money
                {
                    j--;
                    continue;
                }

                int quitient = sum / coin[j];  /// Frequency of the current coin for distribution of changes
                possibleChanges += quitient;   /// Incrementing the number of possible changes with this frequency
                sum %= coin[j];           /// The remaining amount of money

                if(i==j)
                    v1.at(0).second += quitient;  /// Adding quotient to the frequency of previously added coin in outer loop
                else
                    v1.push_back(make_pair(coin[j],quitient)); /// coin[j] is the current available coin,quotient is the frequency
                j--;

            }
            if(possibleChanges < noOfChanges)  /// Whether the current combination of changes is less than the previous
            {
                noOfChanges = possibleChanges; /// Getting minimum number of changes
                v2 = v1;
            }
            sum = money;
            v1.clear();
        }

        cout << "\nNumber of coin(s): "<<noOfChanges<<endl; /// Minimum number of changes

        cout << "Change(s)\n";
        for(int i=0; i<v2.size(); i++)
            cout <<"Value of coin = " << v2.at(i).first<< " Frequency = "<<v2.at(i).second<<"\n";

        cout<<endl;
    }

    return 0;
}

