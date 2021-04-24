#include<iostream>
#include<stack>
#include<iterator>
#include<algorithm>
using namespace std;


void display(stack <int> s)
{
    stack <int> s2=s;
    while(!s2.empty())
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }
}

void display_rev(stack <int> s1)
{
    stack <int> s2;

    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    while(!s2.empty())
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }
}


int main()
{
    stack <int> s1;

    ///Inserting

    s1.push(5);
    s1.push(15);
    s1.push(6);
    s1.push(45);
    s1.push(1);

    cout<<"\nTop element = "<<s1.top()<<endl;

    s1.top() = 100;
    cout<<"\nTop element after changing = "<<s1.top()<<endl;

    s1.pop();
    cout<<"\nTop element after popping = "<<s1.top()<<endl;

    cout<<"\nSize = "<<s1.size()<<endl;

    cout<<"Displaying in general order of stack\n\n";
    display(s1);

    cout<<"Displaying in reverse order of stack\n\n";
    display_rev(s1);


    return 0;
}
