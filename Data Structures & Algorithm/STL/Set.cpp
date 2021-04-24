#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void display(set<int>&v)
{
    set<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<endl;
}
void reverse_display(set<int>&v)
{
    set<int> :: reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++)
    {
        cout<<*ri<<"  ";
    }
    cout<<endl;
}


int main()
{
    set <int> v{1,2,2,4,5,6,6,8,8,10};

    set <int> xx=v;

    display(xx);

    set<int> :: iterator x;
    x = v.end();
    x--;
    cout<<*x<<endl;
    cout<<"Display V: ";
    display(v);

    vector <int> yy;
    copy(xx.begin(),xx.end(),inserter(yy,yy.begin()));

    cout<<"yy = ";
    for(int i=0;i!=yy.size();i++)
    {
        cout<<yy.at(i)<<"  ";
    }
    cout<<endl;

    int arr[10]={1,3,8,2,4,9,9,5,7,8};

    cout<<"Set\n\n";
    set <int> s(arr,arr+10);

    display(s);

    reverse_display(s);

    cout<<"\nMax size = "<<s.max_size()<<endl;

    s.insert(12);
    display(s);

    s.erase(5);
    display(s);

    set<int> :: iterator si;

    si = s.begin();
    s.erase(si);
    display(s);

    si = s.find(4);

    s.erase(si);
    display(s);

    si = s.lower_bound(6);
    cout<<"Lower bound = "<<*si<<endl;

    si = s.lower_bound(8);
    cout<<"Lower bound = "<<*si<<endl;

    si = s.upper_bound(6);
    cout<<"Upper bound = "<<*si<<endl;

    si = s.upper_bound(8);
    cout<<"Upper bound = "<<*si<<endl;


    s.erase(s.begin(),s.find(7));
    cout<<"After erasing first element up to before 7 of s\n";
    display(s);

    set < int,greater<int> > s2(arr,arr+10);

    cout<<"\nIn Descending Order\n";

    set<int,greater<int>> :: iterator p;
    for(p=s2.begin();p!=s2.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<"\nSize = "<<s2.size()<<endl;
    cout<<"\nEmpty = "<<s2.empty()<<endl;

    s2.erase(s2.begin(),s2.find(4));
    cout<<"After erasing first element up to before 4 of s2\n";
    for(p=s2.begin();p!=s2.end();p++)
    {
        cout<<*p<<"  ";
    }

    s2.clear();

    cout<<"\nSize = "<<s2.size()<<endl;
    cout<<"\nEmpty = "<<s2.empty()<<endl;

    return 0;
}
