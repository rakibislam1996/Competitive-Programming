#include<iostream>
#include<map>
#include<utility>
using namespace std;

void show_multimap(multimap <char,int> mm)
{
    multimap <char,int> :: iterator itr;
    for(itr=mm.begin();itr!=mm.end();itr++)
    {
        ///cout<<(*itr).first<<"  "<<(*itr).second<<endl;
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
    cout<<endl;
}

void show_multimap_descend(multimap <char,int,greater<>> mm)
{
    multimap <char,int,greater<>> :: iterator itr;
    for(itr=mm.begin();itr!=mm.end();itr++)
    {
        cout<<(*itr).first<<"  "<<(*itr).second<<endl;
        ///cout<<itr->first<<"  "<<itr->second<<endl;
    }
    cout<<endl;
}

int main()
{
    multimap <char,int> mm1;

    ///Inserting

    mm1.insert(make_pair('A',2));
    mm1.insert(make_pair('A',1));
    mm1.insert(make_pair('B',3));
    mm1.insert(make_pair('B',4));

    cout<<"\nShowing mm1\n\n";
    show_multimap(mm1);


    cout<<"\nCreating multimap in descending order\n\n";

    multimap <char,int,greater<>> mm2;

    ///Inserting

    mm2.insert(make_pair('A',2));
    mm2.insert(make_pair('A',1));
    mm2.insert(make_pair('A',3));

    mm2.insert(make_pair('D',2));
    mm2.insert(make_pair('D',1));
    mm2.insert(make_pair('D',3));

    mm2.insert(make_pair('B',3));
    mm2.insert(make_pair('B',4));


    cout<<"\nShowing mm2\n\n";
    show_multimap_descend(mm2);


    cout<<"Copying one multimap to anither\n";

    multimap <char,int> mm3(mm2.begin(),mm2.end());

    cout<<"\nShowing mm3\n\n";
    show_multimap(mm3);

    ///Iterator

    multimap <char,int> :: iterator itr;

    itr = mm3.lower_bound('A');
    cout<<"\nLower bound of A = "<< (*itr).first<<"  "<<(*itr).second<<endl;

    itr = mm3.upper_bound('A');
    cout<<"\nUpper bound of A = "<< (*itr).first<<"  "<<(*itr).second<<endl;

    itr = mm3.lower_bound('C');
    cout<<"\nLower bound of A = "<< (*itr).first<<"  "<<(*itr).second<<endl;

    itr = mm3.upper_bound('C');
    cout<<"\nUpper bound of A = "<< (*itr).first<<"  "<<(*itr).second<<endl;

    cout<<"\nDisplaying all A using bound\n\n";

    for(itr=mm3.lower_bound('A');itr!=mm3.lower_bound('A');itr++)
        cout<<(*itr).first<<"  "<<(*itr).second<<endl;

}
