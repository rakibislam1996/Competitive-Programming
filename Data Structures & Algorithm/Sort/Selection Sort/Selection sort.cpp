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


void selection_sort(vector<int>&v)
{

    for(int i = v.size()-1; i>=1; i--)
    {
        int t = 0;
        for(int j=1; j<=i; j++)
        {
            if(v.at(t) < v.at(j))
                t = j;
        }

        swap(v.at(i),v.at(t));
    }
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
    }

    selection_sort(v);

    display(v);


    return 0;
}

