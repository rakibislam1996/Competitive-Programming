#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

void display(list<int>&v)
{
    list<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<endl;
}

void reverse_display(list<int>&v)
{
    list<int> :: reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++)
    {
        cout<<*ri<<"  ";
    }
    cout<<endl;
}
bool even(int x)
{
    return (!(x&1));

}

int main()
{
    list <int> :: iterator i,j,k;

    cout<<"______________________________________________\n";
    cout<<"Splicing of two list\n\n";

    list <int> l1{3,4,5,6};
    list <int> l2{-1,-2};
    cout<<"Adding full l3 at the starting position of l1\n";
    i = l1.begin();
    l1.splice(i,l2);
    display(l1);

    list <int> l3{1,2,3,7,8};
    list <int> l4{-4,-5,-6};
    cout<<"\nAdding full l4 to a particular position of l3\n";
    i = l3.begin();
    advance(i,3);
    l3.splice(i,l4);
    display(l3);

    list <int> l5{1,2,3,7,8};
    list <int> l6{-1,-2,-3,-4,-5,-6,-7,-8};
    cout<<"\nAdding a range of l6 to a particular position of l5\n";
    k = l5.begin();
    advance(k,3);
    i = l6.begin();
    advance(i,3);
    j = l6.begin();
    advance(j,6);
    l5.splice(k,l6,i,j); /// here i is 0 based & j is 1 based index
    display(l5);


    list <int> l7{1,2,3,7,8};
    list <int> l8{-4,-5,-6};
    cout<<"\nAdding a single element of l8 to a particular position of l7\n";
    i = l7.begin();
    j = l8.begin();
    advance(j,2);
    l7.splice(i,l8,j);
    display(l7);

    cout<<"______________________________________________\n";


    cout<<"\nErasing a range\n";
    list <int> L{1,2,3,4,5,6,7,8,9,10};
    i = L.begin();
    advance(i,2);
    j = L.begin();
    advance(j,5);
    L.erase(i,j);
    display(L);


    cout<<"\nUsing remove_if function using a boolean function\n";

    L.remove_if(even);
    display(L);


    cout<<"\nMerging l3 to l1\n";
    l1.merge(l3);
    display(l1);


    list <int> v{1,2,3,4,5,6,7,8,9,10};
    cout<<"Display V: ";
    display(v);


    cout<<"\nMax element = "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"\nMax element = "<<*min_element(v.begin(),v.end())<<endl;

    list <int> v1{11,21,31,41,15,16,71,81,19,110};

    cout<<"\nSplicing or merging two lists using splice function\n";

    ///cout<<"Splicing 2nd list just after the last element of 1st list\n";
    ///v.splice(v.end(),v1);
    ///display(v);

    cout<<"Splicing 2nd list just after the first element of 1st list\n";
    list <int> :: iterator it;
    it = v.begin();
    it++;
    v.splice(it,v1);
    display(v);


    list <int> li(5,-1);
    display(li);
    cout<<li.size()<<endl;

    cout<<li.max_size()<<endl;

///    li.reserve(10);

    li.push_front(100);
    display(li);

    li.pop_front();
    display(li);

    li.resize(7,-2);
    display(li);
    reverse_display(li);
///    cout<<li.at(6)<<endl;

    li.push_back(100);
    display(li);

///    cout<<li[7]<<endl;
///    li[7]=200;
///    cout<<li[7]<<endl;

    li.pop_back();
    display(li);

    list<int> :: iterator itr;

    itr = li.begin();
///    itr += 5;
    cout<<*itr<<endl;

    itr++;

    li.insert(itr,1255);
    display(li);
    cout<<*itr<<endl;

    li.insert(itr,2,190);
    display(li);
    cout<<*itr<<endl;

    cout<<"\nAfter removing\n";
    li.remove(190);
    display(li);


    li.erase(itr);
    display(li);
    cout<<*itr<<endl;

    itr = li.end();
    itr--;
    cout<<*itr<<endl;

    li.sort();
    display(li);

    li.unique();
    display(li);

    cout<<li.empty()<<endl;
    li.clear();
    cout<<li.empty()<<endl;

    int arr[5]={1,2,3,4,5};
    list <int> li2(arr,arr+5);
    display(li2);

    list<int> :: iterator itr2;
    itr2 = li2.begin();
    itr2++;
    cout<<*itr2<<endl;

    li2.insert(itr2,125);
    display(li2);
    cout<<*itr2<<endl;

    li2.insert(itr2,2,890);
    display(li2);
    cout<<*itr2<<endl;

    li2.erase(itr2);
    display(li2);
    cout<<*itr2<<endl;

    list <int> li3(arr,arr+4);

    display(li3);
    list<int> :: iterator itr3;

    itr3 = find(li3.begin(),li3.end(),3);
    li3.insert(itr3,123);
    display(li3);

    itr3 = find(li3.begin(),li3.end(),50);
    li3.insert(itr3,1267);
    display(li3);

    li2.sort();
    cout<<"\nSorted li2: ";
    display(li2);

    li3.sort();
    cout<<"\nSorted li3: ";
    display(li3);

    li2.merge(li3);
    display(li2);

    li2.reverse();
    display(li2);
///    li2.sort();

    li2.assign(3,420);
    display(li2);

    li2.unique();
    display(li2);
    cout<<li2.size()<<endl;

    return 0;
}
