#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;

    cout<<"How many items: ";
    int number_of_values;
    cin >> number_of_values;

    cout<<"Enter "<<number_of_values<<" items\n";
    int x;
    for(int i=0; i<number_of_values; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout<<"Enter the item to be searched: ";
    int item_to_search;
    cin >> item_to_search;

    int first_index = 0;

    int last_index = v.size()-1;

    int mid = (first_index + last_index) >> 1;

    while(first_index <= last_index)
    {
        if(item_to_search == v.at(mid))
        {
            cout << endl << item_to_search <<" is found at "<<mid<<" position\n";
            return 0;
        }
        else if(item_to_search < v.at(mid))
            last_index = mid-1;
        else
            first_index = mid+1;

        mid = (first_index + last_index) >> 1;

    }
    cout << endl << item_to_search <<" is not found\n"<<endl;

    v.clear();

    return 0;
}

