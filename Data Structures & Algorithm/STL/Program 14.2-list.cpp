#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;

void display(list<int>&lst)
{
    list<int> :: iterator p;
    for(p=lst.begin();p!=lst.end();p++)
    {
        cout<<*p<<"  ";
    }
    cout<<endl<<endl;
}

int main()
{
    list <int> list1;
    list <int> list2(5);

    int x;
    for(int i=0;i<3;i++)
    {
        cin>> x;
        list1.push_back(x);
    }
    cout<<"List1 \n";
    display(list1);

    list<int> :: iterator p;
    for(p=list2.begin();p!=list2.end();p++)
    {
        *p = 2+rand()%10;
    }
    cout<<"List2 \n";
    display(list2);

    cout<<"\nFirst element: "<<list2.front()<<endl;
    cout<<"last element: "<<list2.back()<<endl;


    list1.push_front(11);
    list1.push_back(20);

    list2.pop_front();
    list2.pop_back();

    cout<<"Now list1 \n";
    display(list1);
    cout<<"last element: "<<list1.back()<<endl;
    cout<<"Now list2 \n";
    display(list2);
    cout<<"last element: "<<list2.back()<<endl;

    list1.remove(5);
    cout<<"\nAfter removing element: "<<endl;
    display(list1);


    list2.merge(list1);
    cout<<"Merged unsorted lists\n";
    display(list1);
    display(list2);

    list<int>listA,listB;
    listA = list1;
    listB = list2;

    listA.sort();

    listA.unique();
    cout<<"\nUnique: "<<endl;
    display(listA;

    listB.sort();


    listA.merge(listB);
    cout<<"Merged sorted lists\n";
    display(listA);

    listA.reverse();
    cout<<"Reversed merged list\n";
    display(listA);
}
