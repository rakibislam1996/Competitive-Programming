#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<sstream>
#define E "\n"
using namespace std;

int main()
{

//    string sss;
//    scanf("%s",sss.c_str());
//    printf("%s\n",sss.c_str());

    string s("one two three four");

    for(int i=0;i<s.length();i++)
        cout<<s.at(i);
    cout<<E<<E;
    cout<<"Printing using printf function\n\n";
    printf("%s\n",s.c_str());

    cout<<"\nInserting at the back\n\n";
    s.push_back('a');
    printf("%s\n",s.c_str());

    cout<<"\nErasing at the back\n\n";
    s.pop_back();
    printf("%s\n",s.c_str());

    string str("somewhere, something incredible is waiting to be known.");

    cout<<"\nPosition of ""some"" from first = "<<str.find("some")<<E;
    cout<<"\nPosition of ""some"" from last = "<<str.rfind("some")<<E;

    cout<<"\nSubstr = "<<str.substr(0,9)<<E;
    cout<<"\nSubstr = "<<str.substr(11,9)<<E;

    cout<<"\nLexicographically smaller = "<<min(str.substr(0,9),str.substr(11,9))<<E;
    cout<<"\nLexicographically larger = "<<max(str.substr(0,9),str.substr(11,9))<<E;

    string s1("five six seven");
    string s2;


    /// Initializing using assign function
    s2.assign(s1);
    printf("\ns2 = %s\n",s2.c_str());

    s2.insert(5,"SIX ");
    printf("\ns2 = %s\n",s2.c_str());

    int found = s2.find("five");

    if(found!= string :: npos)
        cout<<"\nString is found at "<<found<<E<<E;
    else
        cout<<"\nString is not found"<<E<<E;


    s2.erase(12);
    printf("\nAfter erasing s2 = %s\n",s2.c_str());

    string s3("My name is Rakib");

    //s3.replace(1,1," ");     ///(initial location,length of replacing string,string)
    s3.replace(11,17,"MD Rakibul Islam");    ///(initial location,terminal location,string)

    printf("\ns3 = %s\n",s3.c_str());

    s3.replace(14,7,"Rakibul",5);
    printf("\ns3 = %s\n",s3.c_str());

    s3.erase(8,2);
    printf("\ns3 = %s\n",s3.c_str());

    s3.insert(8,"is");
    printf("\ns3 = %s\n\n",s3.c_str());


    istringstream iss(s3);

    string word;

    while(iss>>word)
    {
        cout<<word<<E;
    }
    string str1 = "\\b",str2 = "\\b";
    if(str1==str2)
        cout<<str1<<E;

    return 0;
}
