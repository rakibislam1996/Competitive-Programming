#include<iostream>
#include<map>
#include<utility>
using namespace std;

void show_map(map <char,int> phonebook)
{
    map <char,int> :: iterator itr;
    for(itr=phonebook.begin();itr!=phonebook.end();itr++)
    {
        ///cout<<(*itr).first<<"  "<<(*itr).second<<endl;
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
    cout<<endl;
}

void show_map_descend(map <char,int,greater<>> phonebook)
{
    map <char,int,greater<>> :: iterator itr;
    for(itr=phonebook.begin();itr!=phonebook.end();itr++)
    {
        cout<<(*itr).first<<"  "<<(*itr).second<<endl;
        ///cout<<itr->first<<"  "<<itr->second<<endl;
    }
    cout<<endl;
}

int main()
{
    map <char,int> phonebook;

    cout<<"Inserting A\n";
    phonebook['A'] = 12345;
    cout<<phonebook['A']<<endl;

    cout<<"Inserting B\n";
    phonebook.insert(make_pair('B',19876));
    cout<<phonebook['B']<<endl;

    cout<<"\nShowing Phonebook\n\n";
    show_map(phonebook);

    cout<<"Counting value of B = "<<phonebook.count('A')<<endl;

    /// Iterator
    map <char,int> :: iterator itr;

    /// Finding A
    itr = phonebook.find('A');

    cout<<"\nAfter Erasing A\n\n";
    phonebook.erase(itr);

    show_map(phonebook);

    cout<<"\nCreating Map in descending order\n\n";
    map <char,int,greater<>> phonebook2;

    phonebook2['A'] = 12345;
    phonebook2['B'] = 19876;
    phonebook2['C'] = 19222;

    phonebook2.insert(make_pair('D',56666));
    phonebook2.insert(pair<char,int>('E',17452));

    show_map_descend(phonebook2);

    cout<<"\nCopying one map into another\n\n";
    map <char,int> phonebook3(phonebook2.begin(),phonebook2.end());
    show_map(phonebook3);

    cout<<"\nSize = "<<phonebook3.size()<<endl;

    cout<<"Erasing E\n\n";
    phonebook3.erase('E');
    show_map(phonebook3);

    cout<<"Size = "<<phonebook3.size()<<endl;

    cout<<"Erasing A up to before C\n\n";
    phonebook3.erase(phonebook3.begin(),phonebook3.find('C'));
    show_map(phonebook3);

    cout<<"Size = "<<phonebook3.size()<<endl;

    cout<<"\nEmpty = "<<phonebook3.empty()<<endl;

    cout<<"\nAfter clearing the map\n";
    phonebook3.clear();

    cout<<"Size = "<<phonebook3.size()<<endl;

    cout<<"\nEmpty = "<<phonebook3.empty()<<endl;

}
