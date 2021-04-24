#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

void display(vector<int>&v)
{
    vector<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<"  ";
    }
//    for(int i=0;i<v.size();i++)
//    {
//        cout<<v[i]<<" ";
//    }
    cout<<endl;
}

int main()
{
    vector <int> v;
    cout<<"Initial size = "<<v.size()<<endl;
    cout<<"\nCapacity: "<<v.capacity()<<endl;
    int x;
    cout<<"Enter five integer values: ";
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
        //cout<<i+1<<" Capacity: "<<v.capacity()<<endl;
    }
    vector<int> :: iterator it;
    it = v.begin();
    it += 2;
    cout<<*it<<endl;

    v.insert(it,155);
    display(v);
    cout<<*it<<endl;

    v.erase(it);
    display(v);
    cout<<*it<<endl;

    cout<<"\nSmallest element = "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"\nLargest element = "<<*max_element(v.begin(),v.end())<<endl;

    cout<<"Current contents: \n";
    display(v);
    cout<<"Size after adding 5 values: ";
    cout<<v.size()<<endl;
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    v.push_back(6.6);
    cout<<"Contents now: \n";
    display(v);
    cout<<"\nSize = "<<v.size()<<endl;
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    vector<int> :: iterator itr = v.begin();
    itr = itr + 3;
    v.insert(itr,9);
    cout<<"\nContents after inserting: \n";
    display(v);
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    v.erase(itr,itr+3);
    cout<<"\nContents after deletion: \n";
    display(v);
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    v.pop_back();
    cout<<endl;
    display(v);
    cout<<"\nCapacity: "<<v.capacity()<<endl;

    cout<<"\nFirst element: "<<v.front()<<endl;
    cout<<"\nlast element: "<<v.back()<<endl;

    v.at(1)=12;
    display(v);

    v.resize(2);
    display(v);

    v.resize(4);
    v.insert(itr,23);
    display(v);

    swap(v.at(0),v.at(1));
    display(v);

    v.clear();
    cout<<"\nEmpty = "<<v.empty()<<endl;

    cout<<"END\n";
}
