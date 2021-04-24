#include<iostream>
#include<map>
#include<cstdlib>
using namespace std;

typedef map<string,int> phonemap;

int main()
{

    string name;
    int number;
    phonemap phone;
    cout<<"Enter three sets of name and number\n";
    for(int i=0;i<3;i++)
    {
        cin>>name>>number;
        phone[name] = number;
    }
    phone["Jacob"] = 4444;
    phone.insert(pair<string,int> ("Bose",5555));

    cout<<"List of telephone numbers:\n";
    phonemap :: iterator p;
    for(p=phone.begin();p!=phone.end();p++)
    {
        cout<<(*p).first<<"  "<<(*p).second<<endl;
    }
    int n = phone.size();
    cout<<"\nSize of map: "<<n<<"\n\n";

    cout<<"\nEnter name: ";
    cin>>name;
    number = phone[name];
    cout<<"Number: "<<number<<"\n";
}
