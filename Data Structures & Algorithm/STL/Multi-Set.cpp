#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;


void multi_display(multiset<int>&v)
{
    multiset<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<endl;
}
void reverse_multi_display(multiset<int>&v)
{
    multiset<int> :: reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++)
    {
        cout<<*ri<<"  ";
    }
    cout<<endl;
}


int main()
{
    multiset <int> v{1,2,3,4,3,2,8,1,6};
    cout<<"Display V: ";
    multi_display(v);

    auto i = v.find(6);
    cout<<(*i)<<endl;
    v.insert(6);
    v.erase(i);
    multi_display(v);


    int arr[10]={1,3,8,2,4,9,9,5,7,8};

    cout<<"Multi Set\n\n";

    multiset <int> ms(arr,arr+10);

    multi_display(ms);

    reverse_multi_display(ms);

    cout<<"\nMax size = "<<ms.max_size()<<endl;

    ms.insert(24);
    multi_display(ms);

    cout<<ms.count(9)<<endl;

    ms.erase(9);
    multi_display(ms);

    multiset<int> :: iterator msi;

    msi = ms.begin();
    ms.erase(msi);
    multi_display(ms);

    msi = ms.find(8);

    ms.erase(msi);
    multi_display(ms);

    msi = ms.lower_bound(6);
    cout<<"Lower bound = "<<*msi<<endl;

    msi = ms.lower_bound(8);
    cout<<"Lower bound = "<<*msi<<endl;

    msi = ms.upper_bound(6);
    cout<<"Upper bound = "<<*msi<<endl;

    msi = ms.upper_bound(8);
    cout<<"Upper bound = "<<*msi<<endl;

    ms.erase(ms.begin(),ms.find(4));
    cout<<"After erasing first element up to before 4 of ms\n";
    multi_display(ms);

    multiset < int,greater<int> > ms2(arr,arr+10);

    cout<<"\nIn Descending Order\n";

    multiset<int,greater<int>> :: iterator p;
    for(p=ms2.begin();p!=ms2.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<"\nSize = "<<ms2.size()<<endl;
    cout<<"\nEmpty = "<<ms2.empty()<<endl;

    ms2.erase(ms2.begin(),ms2.find(4));
    cout<<"After erasing first element up to before 4 of ms2\n";
    for(p=ms2.begin();p!=ms2.end();p++)
    {
        cout<<*p<<"  ";
    }

    ms2.clear();

    cout<<"\nSize = "<<ms2.size()<<endl;
    cout<<"\nEmpty = "<<ms2.empty()<<endl;

    return 0;
}
