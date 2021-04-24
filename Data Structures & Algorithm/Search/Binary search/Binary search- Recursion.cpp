#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>&v,int first_index,int last_index,int item_to_search)
{
    if(first_index <= last_index)
    {
        int mid = (first_index + last_index) >> 1;

        if(item_to_search == v.at(mid))
            return true;

        if(item_to_search > v.at(mid))
            BinarySearch(v,first_index,mid-1,item_to_search);

        BinarySearch(v,mid+1,last_index,item_to_search);
    }

    return false;
}


int main()
{
    vector <int> v;

    cout<<"How many items: ";
    int number_of_items;
    cin >> number_of_items;

    cout<<"Enter "<<number_of_items<<" items\n";
    int x;
    for(int i=0; i<number_of_items; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout<<"Enter the item to be searched: ";
    int item_to_search;
    cin >> item_to_search;

    if((BinarySearch(v,0,v.size()-1,item_to_search)==1))
        cout<<item_to_search<<" is found\n";
    else
        cout<<item_to_search<<" is not found\n";

    v.clear();

    return 0;
}

//    bool is = binary_search(v.begin(),v.end(),item_to_search);
//    cout<<is<<endl;
