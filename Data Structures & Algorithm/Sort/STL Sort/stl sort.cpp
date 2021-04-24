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

bool makepostive(int a,int b)
{
    return fabs(a) < fabs(b);
}

bool lessthan10(int a)
{
    return a<10;
}

int main()
{
    vector <int> v1= {0,8,-2,5,2,7,-1,9};
    cout<<"sort using user defined criteria\n";
    sort(v1.begin(),v1.end(),makepostive);
    for (int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
    cout<<E<<E;

    vector <int> v2= {0,8,-2,5,2,7,-1,9};
    cout<<"sort in descending order\n";
    sort(v2.begin(),v2.end(),greater<int>());
    for (int i=0; i<v2.size(); i++)
        cout<<v2.at(i)<<" ";
    cout<<E<<E;

    vector <int> v3= {0,8,-2,5,2,7,-1,9,11,6,22,4};
    cout<<"Partial sort: maximum five values in descending order\n";
    partial_sort(v3.begin(),v3.begin()+5,v3.end(),greater<int>());
    for (int i=0; i<v3.size(); i++)
        cout<<v3.at(i)<<" ";
    cout<<E<<E;

    vector <int> v4= {10,8,22,5,2,71,112,9,11,6,32,4};
    cout<<"Partition: values which are less than 10\n";
    partition(v4.begin(),v4.end(),lessthan10);
    for (int i=0; i<v4.size(); i++)
        cout<<v4.at(i)<<" ";
    cout<<E<<E;

    vector <int> v5= {10,8,22,5,2,71,112,9,11,6,32,4};
    cout<<"Partition: values which are less than 10 in original order\n";
    stable_partition(v5.begin(),v5.end(),lessthan10);
    for (int i=0; i<v5.size(); i++)
        cout<<v5.at(i)<<" ";
    cout<<E<<E;

    return 0;
}
