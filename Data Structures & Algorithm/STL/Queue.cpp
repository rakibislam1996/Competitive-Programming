#include<iostream>
#include<queue>
#include<iterator>
#include<algorithm>
using namespace std;

void display(queue <int> q)
{
    queue <int> q2 = q;
    while(!q2.empty())
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }
}

int main()
{
    queue <int> q1;

    ///Inserting

    q1.push(5);
    q1.push(15);
    q1.push(6);
    q1.push(45);
    q1.push(1);
    queue <int> q2;
    q2 = q1;

    display(q2);

    cout<<"\nFront element = "<<q1.front()<<endl;
    cout<<"\nBack element = "<<q1.back()<<endl;
    cout<<"\nSize = "<<q1.size()<<endl;

    q1.front() = 100;
    cout<<"\nFront element after changing = "<<q1.front()<<endl;

    ///Erasing
    q1.pop();
    cout<<"\nFront element after erasing = "<<q1.front()<<endl;

    cout<<"\nSize = "<<q1.size()<<endl;

    q1.back() = 420;
    cout<<"\nBack element after changing = "<<q1.back()<<endl;

    cout<<"\nDisplaying the queue\n\n";
    display(q1);


    return 0;
}
