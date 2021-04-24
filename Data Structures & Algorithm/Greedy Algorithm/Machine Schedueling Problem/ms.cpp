#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector< pair <int,int> > v;
    int t1,t2;
    int count = 0;

    for(int i=0; i<num; i++)
    {
        cin >> t1 >> t2;
        v.push_back(make_pair(t1,t2));
    }

    sort(v.begin(),v.end());

    vector< pair <int,int> > :: iterator it;

    it = v.begin();
    while(1)
    {
        int x = (*it).second;
        v.erase(it);

        for(int j = v.size(); j>=1; j--)
        {
            if(x <= (*it).first)
            {
                x = (*it).second;
                v.erase(it);
            }
            else
                it++;
        }
        count++;

        if(v.size()==1 )
        {
            count++;
            break;
        }
        else if(v.size()==0 )
            break;

        it = v.begin();
    }
    cout<<"\nMachine(s) required: "<<count<<endl;


    return 0;
}
