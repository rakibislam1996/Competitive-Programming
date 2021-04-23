#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k,m,p;

    cin >> n >> k >> m;

    map <string,int> Map;

    string str[n+1];

    for(int i=1; i<=n; i++)
        cin >> str[i];

    int cost[n+1];

    int a,b;

    for(int i=1; i<=n; i++)
    {
        cin >> a;
        cost[i] = a;
    }

    for(int i=1; i<=k; i++)
    {
        cin >> a;

        if(a==1)
        {
            cin >> b;
            Map[str[b]]=cost[b];
            continue;
        }

        stack<int> forb;

        priority_queue<int,vector<int>,greater<int> >minvalue;

        for(int j=1; j<=a; j++)
        {
            cin >> b;
            forb.push(b);
            minvalue.push(cost[b]);
        }

        p = minvalue.top();
        while(!forb.empty())
        {
            Map[str[forb.top()]]=p;
            forb.pop();
        }
    }

    string message;

    unsigned long long sum = 0;

    for(int j=1; j<=m; j++)
    {
        cin >> message;
        sum += Map[message];
    }

    cout<<sum<<endl;
}
