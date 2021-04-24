 #include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<cstdlib>
#include<utility>

using namespace std;

void display(vector<int>&v)
{
    vector<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<" ";
    }
    cout<<endl;
}

void reverse_display(vector<int>&v)
{
    vector<int> :: reverse_iterator ri;
    for(ri=v.rbegin();ri!=v.rend();ri++)
    {
        cout<<*ri<<"  ";
    }
    cout<<endl;
}

int main()
{

    vector <int> :: iterator baal;
    vector <int> bl{1,2,3,4,5,6,7,8,9,10};
    vector <int> bal{-101,-23,-56,-100,-23};
    display(bl);
    display(bal);
    baal = bl.begin();
    baal+=2;
    auto i = bal.begin();
    advance(i,1);
    auto j = bal.begin();
    advance(j,3);
    bl.insert(baal,i,j);
    display(bl);

    baal = bl.begin();
    baal+=2;
    bl.insert(baal,100);

    //cout<<(*(baal))<<endl;
    //bl.insert(baal,2);
    //cout<<(*(baal))<<endl;
    display(bl);
    //bl.erase(baal);
    cout<<(*(baal))<<endl;
    //display(bl);


    vector <int> xx[8];
    xx[0]= {1,2,3,4};



    for (int i=0; i<xx[0].size(); i++)
    {
        cout<<xx[0][i]<<" ";
    }
    cout<<endl;

    xx[1]=xx[0];

    for (int i=0; i<xx[1].size(); i++)
    {
        cout<<xx[1][i]<<" ";
    }
    cout<<endl;

    xx[2]={5,6};
    xx[1]=xx[2];

    for (int i=0; i<xx[1].size(); i++)
    {
        cout<<xx[1][i]<<" ";
    }
    cout<<endl;

    xx[1].push_back(11);
    xx[1].push_back(12);

    for (int i=0; i<xx[1].size(); i++)
    {
        cout<<xx[1][i]<<" ";
    }
    cout<<endl;

    vector <int> V(5);

    display(V);
    cout<<"\n";

    vector <int> Vv(5,-2);

    display(Vv);
    cout<<"\n";

    vector <int> v{1,2,3,3,5,7,7,8,9,8,10};
    cout<<*(v.end()-1)<<endl;
    v.erase(v.end()-1);
    cout<<"\nAfter erasing the last element\n";
    display(v);

    vector <int> copys;

    copys = v;

    display(copys);
    cout<<"\n";

    cout<<"Display V: ";
    display(v);
    cout<<"Size = "<<v.size()<<endl;


    ///To make unique vector should be sorted

    sort(v.begin(),v.end());
    cout<<"Display V in ascending order: ";
    display(v);

    vector <int> vv{11,2,3,39,5,70,7,8,91,8,10};

    sort(vv.begin(),vv.end(),greater<int>());
    cout<<"Display vv in descending order: ";
    display(vv);

    vector <int> vvv{11,2,3,39,5,70,7,8,91,8,10};

    partial_sort(vvv.begin(),vvv.begin()+5,vvv.end(),greater<int>());
    cout<<"Display vvv with first five maximum values using partial descending order sort: ";
    display(vvv);



    ///unique(v.begin(),v.end()); This statement should not be used
    ///To make unique erase function should be used

    cout<<"Display unique element of V : ";
    vv.erase(unique(vv.begin(),vv.end()),vv.end());
    display(vv);

    cout<<"Size = "<<v.size()<<endl;

    cout<<"\nMax element = "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"\nMax element = "<<*min_element(v.begin(),v.end())<<endl;
    vector<int> :: iterator itr;
    int arrr[10]={11,2,3,39,5,70,7,8,91,8};
    vector<int> xyz = {11,2,3,39,5,70,7,8,91,8};
    itr = xyz.begin();
    itr+=2;
    xyz.insert(itr,125);
    cout<<*itr<<endl;
    cout<<"\nDisplay xyz: ";
    display(xyz);
    if(itr==xyz.begin())
        cout<<"yes\n";
    else
        cout<<"No\n";
    itr+=2;
    xyz.erase(itr);
    display(xyz);
    cout<<*itr<<endl;
    display(xyz);

    //cout<<"\nSum = "<<accumulate(arrr,arrr+10,0)<<endl;
    //cout<<"\nProduct = "<<accumulate(v.begin(),v.end(),1,multiplies<int>())<<endl;

    vector <int> v1(5,-1);
    cout<<"\nDisplay V1: ";
    display(v1);

    cout<<"Size = "<<v1.size()<<endl;

    cout<<v1.max_size()<<endl;

    v1.reserve(10);

    v1.resize(7,-2);
    cout<<"\nDisplay V1: ";
    display(v1);
    reverse_display(v1);

    cout<<v1.at(6)<<endl;

    v1.push_back(100);
    cout<<"\nDisplay V1: ";
    display(v1);

    cout<<v1[7]<<endl;
    v1[7]=200;
    cout<<v1[7]<<endl;

    v1.pop_back();
    cout<<"\nDisplay V1: ";
    display(v1);



    itr = v1.begin();
    cout<<*itr<<endl;

    itr += 2;
    cout<<*itr<<endl;

    v1.insert(itr,125);
    cout<<"\nDisplay V1: ";
    display(v1);
    cout<<*itr<<endl;
    v1.erase(itr);
    cout<<*itr<<endl;

    v1.insert(itr,2,890);
    cout<<"\nDisplay V1 itr 3: ";
    display(v1);
    cout<<*itr<<endl;

    v1.erase(itr);

    cout<<"\nDisplay V1: ";
    display(v1);
    cout<<*itr<<endl;

    cout<<"\nFinding value\n";
    itr = find(v1.begin(),v1.end(),125);
    cout<<*itr<<endl<<endl;

    v1.erase(remove(v1.begin(),v1.end(),125),v1.end());
    cout<<"\nAfter removing Display V1: ";
    display(v1);


    itr = v1.end();

    itr--;
    cout<<*itr<<endl;

    cout<<v1.empty()<<endl;
    v1.clear();
    cout<<v1.empty()<<endl;

    int arr[5]={8,2,2,4,5};
    sort(arr,arr+5);
    cout<<"\nArray: ";
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    vector <int> v2(arr,arr+5);
    cout<<"\nDisplay V2: ";
    display(v2);

    itr = v2.begin();
    cout<<*itr<<endl;

    itr += 2;
    cout<<*itr<<endl;

    v2.insert(itr,155);
    cout<<"\nDisplay V2: ";
    display(v2);
    cout<<*itr<<endl;

    //v2.erase(itr);
    //display(v2);

    vector <int> v3(arr,arr+4);
    cout<<"\nDisplay V3: ";
    display(v3);

    v3.assign(3,420);
    cout<<"\nDisplay V3: ";
    display(v3);


    return 0;
}
