#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<string,int> p;

    p.first = "Rakib";
    p.second = 120;
    cout<<"P = "<<p.first<<"  "<<p.second<<endl;

    pair<char,int> p2('B',5555);
    cout<<"P2 = "<<p2.first<<"  "<<p2.second<<endl;

    pair<double,int> p3;
    p3 = make_pair(12.345,57);
    cout<<"P3 = "<<p3.first<<"  "<<p3.second<<endl;

    pair<double,int> p4(p3);
    cout<<"P4 = "<<p4.first<<"  "<<p4.second<<endl;

    pair<double,int> p5(p4);
    cout<<"P5 = "<<p5.first<<"  "<<p5.second<<endl;

    pair< string , pair<double,int> > student;

    student = make_pair("Rakib",make_pair(3.44,11608009));
    cout<<student.first<<"  "<<student.second.first<<"  "<<student.second.second<<endl;

    student = make_pair("Rakib",p4);
    cout<<student.first<<"  "<<student.second.first<<"  "<<student.second.second<<endl;
    pair<string,int> q[2];

    q[0].first = "ghaf";
    cout<<q[0].first<<endl;
    return 0;
}
