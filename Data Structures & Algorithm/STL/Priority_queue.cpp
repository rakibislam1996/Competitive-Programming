#include<iostream>
#include<queue>
#include<iterator>
#include<algorithm>
using namespace std;

void display_max(priority_queue <int> pq)
{
    ///Copying
    priority_queue <int> pq2 = pq;

    while(!pq2.empty())
    {
        cout<<pq2.top()<<"  ";
        pq2.pop();
    }
    cout<<endl<<endl;
}

void display_min(priority_queue <int,vector<int>,greater<int>> pq)
{
    priority_queue <int,vector<int>,greater<int>> pq2 = pq;

    while(!pq2.empty())
    {
        cout<<pq2.top()<<"  ";
        pq2.pop();
    }
    cout<<endl;
}

struct compare
{
    bool operator()(const int &right,const int &left)
    {
        return left>right;
    }
};

int main()
{
    /// Creating Descending or max heap
    priority_queue<int> MaxHeap;

    ///Inserting

    cout<<"Top element of Max heap\n\n";
    MaxHeap.push(5);
    cout<<MaxHeap.top()<<endl;

    MaxHeap.push(1);
    cout<<MaxHeap.top()<<endl;

    MaxHeap.push(6);
    cout<<MaxHeap.top()<<endl;

    MaxHeap.push(45);
    cout<<MaxHeap.top()<<endl;

    MaxHeap.push(2);
    cout<<MaxHeap.top()<<endl;

    cout<<"\nSize = "<<MaxHeap.size()<<endl;

    cout<<"Showing all elements of Max heap after Inserting\n\n";
    display_max(MaxHeap);

    priority_queue<int> MaxHeap2;
    MaxHeap2.push(-2);
    MaxHeap2.push(-8);
    MaxHeap2.push(-10);
    cout<<"Swap of two queues\n\n";
    swap(MaxHeap,MaxHeap2);
    cout<<"MaxHeap -> ";
    display_max(MaxHeap);
    cout<<"MaxHeap2 -> ";
    display_max(MaxHeap2);
    swap(MaxHeap,MaxHeap2);

    cout<<"Top element of Max heap after erasing\n\n";

    ///Erasing

    MaxHeap.pop();
    cout<<MaxHeap.top()<<endl;

    MaxHeap.pop();
    cout<<MaxHeap.top()<<endl;

    MaxHeap.pop();
    cout<<MaxHeap.top()<<endl;

    MaxHeap.pop();
    cout<<MaxHeap.top()<<endl;

    MaxHeap.pop();

    cout<<"\nSize = "<<MaxHeap.size()<<endl;



    /// Creating Ascending or min heap
    priority_queue<int,vector<int>,greater<int>> MinHeap;


    ///Inserting

    cout<<"\nTop element of Min heap\n\n";

    MinHeap.push(5);
    cout<<MinHeap.top()<<endl;

    MinHeap.push(4);
    cout<<MinHeap.top()<<endl;

    MinHeap.push(6);
    cout<<MinHeap.top()<<endl;

    MinHeap.push(45);
    cout<<MinHeap.top()<<endl;

    MinHeap.push(2);
    cout<<MinHeap.top()<<endl;

    cout<<"\nSize = "<<MinHeap.size()<<endl;

    cout<<"Showing all elements of Min heap after Inserting\n\n";
    display_min(MinHeap);

    cout<<"\nTop element of Min heap after erasing\n\n";

    ///Erasing

    MinHeap.pop();
    cout<<MinHeap.top()<<endl;

    MinHeap.pop();
    cout<<MinHeap.top()<<endl;

    MinHeap.pop();
    cout<<MinHeap.top()<<endl;

    MinHeap.pop();
    cout<<MinHeap.top()<<endl;

    MinHeap.pop();

    cout<<"\nSize = "<<MinHeap.size()<<endl;


    ///Priority queue using operator() function

    priority_queue<int,vector<int>,compare> pq;

    pq.push(6);
    pq.push(90);
    pq.push(34);
    pq.push(22);
    pq.push(102);

    cout<<"\nPriority queue using operator() function\n\n";

    while(!pq.empty())
    {
        cout<<pq.top()<<"  ";
        pq.pop();
    }


    return 0;
}
