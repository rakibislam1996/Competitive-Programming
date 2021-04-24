#include<iostream>
#include<cstdio>
#include<numeric>
#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int func(plus<int>sum,int a,int b)
{
    return sum(a,b);
}
int main()
{

//    plus <int> addnum;
//    int summation = addnum(12,13);
//    cout<<"Summation = "<<summation<<endl;
//    cout<<"Sum by function = "<<func(addnum,22,33)<<endl;
//
//    plus <char> addchar;
//    char addedchar = addchar('1','3');
//    cout<<"\nAdded char = "<<addedchar<<endl;
//    printf("%d  %d %d\n",'1','3','d');
//
//    plus <string> addstr;
//    string addedstr = addstr("Rakib ","Islam");
//    cout<<"\nAdded String = "<<addedstr<<endl;
//
//    minus <int> subnum;
//    int subtract = subnum(20,15);
//    cout<<"\nSubtraction = "<<subtract<<endl;
//
//    multiplies <int> mulnum;
//    int mul = mulnum(20,15);
//    cout<<"\nMultiplication = "<<mul<<endl;
//
//    divides <int> div;
//    int division = div(20,5);
//    cout<<"\nDivision = "<<division<<endl;
//
//    modulus <int> mod;
//    int Modulus = mod(20,3);
//    cout<<"\nModulus = "<<Modulus<<endl;
//
//    negate <int> neg;
//    int Negation = neg(20);
//    cout<<"\nNegation = "<<Negation<<endl;
//
//    equal_to <int> eq;
//    bool is_equal = eq(20,20);
//    cout<<"\nis_equal = "<<is_equal<<endl;
//
//    not_equal_to <int> neq;
//    bool is_not_equal = neq(20,21);
//    cout<<"\nis_not_equal = "<<is_not_equal<<endl;
//
//    greater<int> grt;
//    bool is_Greater = grt(29,20);
//    cout<<"\nis_Greater = "<<is_Greater<<endl;
//
//    greater_equal<int> grteq;
//    bool is_Greater_equal = grteq(29,29);
//    cout<<"\nis_Greater_equal = "<<is_Greater_equal<<endl;
//
//    less<int> lss;
//    bool is_less = lss(20,29);
//    cout<<"\nis_less = "<<is_less<<endl;
//
//    less_equal<int> lsseq;
//    bool is_less_equal = lsseq(29,29);
//    cout<<"\nis_less_equal = "<<is_less_equal<<endl;
//
//    int List[8]={1,2,3,4,5,6,7,8};
//    vector<int>inlist(List,List+8);
//    ostream_iterator<int>print(cout," ");
//    cout<<"\ninlist = ";
//    copy(inlist.begin(),inlist.end(),print);
//    cout<<endl;
//
//    int sum = accumulate(inlist.begin(),inlist.end(),0);
//    cout<<"\nSum of the inslist = "<<sum<<endl;
//
//    int product = accumulate(inlist.begin(),inlist.end(),2,multiplies <int>());
//    cout<<"\nProduct of the inslist = "<<product<<endl;
//
//    int temp[8]={2,3,6,5,8,9,8,8};
//    vector<int>veclist(temp,temp+8);
//    vector <int> :: iterator itr1,itr2;
//    cout<<"\nVeclist = ";
//    copy(veclist.begin(),veclist.end(),print);
//    cout<<endl;
//
//    itr1 = adjacent_find(veclist.begin(),veclist.end(),greater<int>());
//    itr2 = itr1 + 1;
//
//    cout<<"First set if out of order elements = "<<*itr1<<"  "<<*itr2<<endl;
//    cout<<"First out of order element position = "<<veclist.end() - itr2<<endl;
//
//
//
//    if(greater<string>()("ABC","ABCD"))
//        cout<<"\nYes\n";
//    else
//        cout<<"\nNo\n";
//
//    cout<<"\nNot";
//    if(logical_not<int>()(0)) ///if(logical_not<int>()(1))
//         cout<<"\nYes\n";
//    else
//        cout<<"\nNo\n";
//
//    cout<<"\nOr";
//    if(logical_or<int>()(0,0)) ///if(logical_or<int>()(1,0))
//         cout<<"\nYes\n";
//    else
//        cout<<"\nNo\n";
//
//    cout<<"\nAnd";
//    if(logical_and<int>()(1,1)) ///if(logical_or<int>()(1,0))
//         cout<<"\nYes\n";
//    else
//        cout<<"\nNo\n";

    int x[]={10,50,30,40,20};
    int y[]={70,50,30,80};

//    sort(x,x+5);
//    for(int i=0;i<5;i++)
//        cout<<x[i]<<" ";
//    cout<<endl;
//
//    sort(x,x+5,greater<int>());
//    for(int i=0;i<5;i++)
//        cout<<x[i]<<" ";
//    cout<<endl;
//
//    sort(x,x+5,less<int>());
//    for(int i=0;i<5;i++)
//        cout<<x[i]<<" ";
//    cout<<endl;
//
//    sort(y,y+4);
//    for(int i=0;i<4;i++)
//        cout<<y[i]<<" ";
//    cout<<endl;
//
//

    int z[9];
    merge(y,y+4,x,x+5,z);
    for(int i=0;i<9;i++)
        cout<<z[i]<<" ";
    cout<<endl;
}
