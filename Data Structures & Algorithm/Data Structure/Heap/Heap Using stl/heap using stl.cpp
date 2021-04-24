#include<bits/stdc++.h>
#define E "\n"
#define sc scanf
#define pf printf
#define pb push_back
#define mod 1000000007
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;


int main()
{
    vector <int> v1= {10,8,22,5,2,71,112,9,11,6,32,4};

    /// By making heap the largest element will be in the 1st position

    cout<<"Making heap\n";
    make_heap(v1.begin(),v1.end());
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E<<E;

    cout<<"Popping the 1st i.e. largest element using pop_heap\n";
    pop_heap(v1.begin(),v1.end());///1st element will be swapped by the last element: swap(v.at(0),v.at(v.size()-1)
                                  /// new heap will be made except the last element: make_heap(v.begin(),v.end()-1);
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E;
    v1.pop_back();  /// last element i.e. largest element will be popped
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E<<E;

    /// Adding a new element and then again make heap i.e. generate the largest
    v1.push_back(156);  /// last element i.e. largest element will be popped
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E;
    make_heap(v1.begin(),v1.end());
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E<<E;

    cout<<"Sorting the vector i.e. heap\n";
    sort_heap(v1.begin(),v1.end());
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E<<E;

    return 0;
}
