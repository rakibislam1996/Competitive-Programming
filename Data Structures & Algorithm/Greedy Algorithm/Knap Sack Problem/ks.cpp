#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float p,w,c,temp,weight = 0,profit = 0,count=0;
    vector< pair <float,float> >v;

    for(int i=0; i<n; i++)
    {
        cin >> p >> w;
        v.push_back(make_pair(p,w));
    }
    float ratio[20];
    for(int i=0;i<n;i++)
        ratio[i]=(v[i].first/v[i].second);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                swap(ratio[i],ratio[j]);
                swap(v[i],v[j]);
            }
        }
    }

    cin >> c;
    temp = c;

    for(int j=0; j<n && temp!=0; j++)
    {
        if(v.at(j).second > temp)
        {
            profit += ((v.at(j).first/v.at(j).second) * temp);

            weight += temp;

            v.at(j).second = temp;

            count++;

            break;
        }

        temp -=v.at(j).second;

        profit +=v.at(j).first;

        weight +=v.at(j).second;

        count++;

    }

    cout<<"\nProfit: "<<profit<<endl;
    cout<<"\nWeight: "<<weight<<endl;

    for(int i=0; i<count; i++)
    {
        cout<<"Item : "<<v.at(i).first<<" weight: "<<v.at(i).second<<endl;
    }


    return 0;
}
