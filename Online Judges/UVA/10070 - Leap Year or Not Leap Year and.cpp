#include<bits/stdc++.h>
using namespace std;

bool isDivisibleBy400(string s)
{
    int length = s.length();

    if (s.at(length-1)!='0' || s.at(length-2)!='0')
        return false;

    int m = ((s.at(length-4)-'0') * 10) + (s.at(length-3) - '0');

    return (m % 4 == 0);
}

bool isDivisibleBy4and100(string s)
{

    int length = s.length();

    if (s.at(length-1)=='0' && s.at(length-2)=='0')
        return false;

    int m = ((s.at(length-2)-'0') * 10) + (s.at(length-1) - '0');

    return (m % 4 == 0);
}


bool isDivisibleBy15(string s)
{

    int length = s.length();

    if (s.at(length-1)!='5' && s.at(length-1)!='0')
        return false;

    int sum = accumulate(begin(s), end(s), 0) - ('0' * length);

    return (sum % 3 == 0);
}

bool isDivisibleBy55(string s)
{

    int length = s.length();

    if (s.at(length-1)!='5' && s.at(length-1)!='0')
        return false;

    int sum = 0;

    if((length & 1)==0)
    {
        for(int i=0; i<=length-2; i += 2)
            sum += ((s.at(i)-'0') - (s.at(i+1) - '0'));
    }
    else if((length & 1)!=0)
    {
        for(int i=0; i<=length-2; i += 2)
            sum += ((s.at(i)-'0') - (s.at(i+1) - '0'));

        sum += (s.at(length-1)-'0');
    }

    return (sum % 11 == 0);
}

int main()
{
    string s ;
    bool flag = true;
    while(cin >> s)
    {
        if(!flag)
            cout<<"\n";
        flag = false;

        bool flagForOrdinary = false,flagForBulukulu = false,flagForhulukulu = false;

        if(isDivisibleBy400(s))
        {
            cout<<"This is leap year.\n";
            flagForOrdinary = true;

            if(isDivisibleBy55(s))
            {
                flagForBulukulu = true;
            }

        }
        else
        {
            if(isDivisibleBy4and100(s))
            {
                cout<<"This is leap year.\n";
                flagForOrdinary = true;

                if(isDivisibleBy55(s))
                {
                    flagForBulukulu = true;
                }
            }
        }
        if(isDivisibleBy15(s))
        {
            cout<<"This is huluculu festival year.\n";
            flagForOrdinary = true;
            flagForhulukulu = true;
        }

        if(flagForBulukulu == true)
            cout<<"This is bulukulu festival year.\n";

        if(flagForOrdinary == false)
            cout<<"This is an ordinary year.\n";
    }

    return 0;
}
