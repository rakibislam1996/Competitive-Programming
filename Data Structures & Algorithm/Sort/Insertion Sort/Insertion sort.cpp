#include<bits/stdc++.h>
using namespace std;


void display(vector<int>&v)
{
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v;

    int number_of_values;
    cin >> number_of_values;

    int x;
    for(int i=0; i<number_of_values; i++)
    {
        cin >> x;
        v.push_back(x);
        for(int j=0; j<i; j++)
        {
            if(v.at(j) > v.at(i))
                swap(v.at(j),v.at(i));
        }
    }


    display(v);


    return 0;
}

