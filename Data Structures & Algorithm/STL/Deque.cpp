#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
using namespace std;

void display(deque<int>&v)
{
    deque<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<endl;
}
void reverse_display(deque<int>&v)
{
    deque<int> :: reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++)
    {
        cout<<*ri<<"  ";
    }
    cout<<endl;
}

int main()
{
    deque <int> v{1,2,3,4,3,6,7,8,7,10};
    cout<<"Display V: ";
    display(v);

    ///To make unique vector should be sorted

    sort(v.begin(),v.end());

    ///unique(v.begin(),v.end()); This statement should not be used
    ///To make unique erase function should be used

    cout<<"\nDisplay unique element of V : ";

    v.erase(unique(v.begin(),v.end()),v.end());
    display(v);

    cout<<"Size = "<<v.size()<<endl;

    cout<<"\nMax element = "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"\nMax element = "<<*min_element(v.begin(),v.end())<<endl;

    deque <int> dq(5,-1);
    display(dq);
    cout<<dq.size()<<endl;
    cout<<dq.max_size()<<endl;

///    dq.reserve(10);

    dq.push_front(100);
    display(dq);

    dq.pop_front();
    display(dq);

    dq.resize(7,-2);
    display(dq);
    reverse_display(dq);
    cout<<dq.at(6)<<endl;

    dq.push_back(100);
    display(dq);

    cout<<dq[7]<<endl;
    dq[7]=200;
    cout<<dq[7]<<endl;

    dq.pop_back();
    display(dq);

    deque<int> :: iterator itr;

    itr = dq.begin();
    cout<<*itr<<endl;

    itr += 5;
    cout<<*itr<<endl;

    dq.insert(itr,125);
    display(dq);
    cout<<*itr<<endl;

    dq.insert(itr,2,190);
    display(dq);
    cout<<*itr<<endl;

    dq.erase(itr);
    display(dq);
    cout<<*itr<<endl;

    itr = dq.end();
    itr--;
    cout<<*itr<<endl;

    cout<<dq.empty()<<endl;
    dq.clear();
    cout<<dq.empty()<<endl;

    int arr[5]={1,3,3,9,5};
    deque <int> dq2(arr,arr+5);
    display(dq2);

    deque<int> :: iterator itr2;
    itr2 = dq2.begin();
    itr2 += 2;
    cout<<*itr2<<endl;

    dq2.insert(itr2,125);
    display(dq2);
    cout<<*itr2<<endl;

    dq2.insert(itr2,2,890);
    display(dq2);
    cout<<*itr2<<endl;

    dq2.erase(itr2);
    display(dq2);
    cout<<*itr2<<endl;

    deque <int> dq3(arr,arr+4);
    display(dq3);

    dq3.assign(3,420);
    display(dq3);



    return 0;
}
