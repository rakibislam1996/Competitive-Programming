#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pii          pair<int,int>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e5+10;

vector < pii > adj[MAX];
bool vis[MAX];

void Dijkstra(int src,int *d)
{
    fill(d,d+MAX,1e8);
    memset(vis,0,sizeof vis);

    priority_queue < pii,vector<pii>,greater<pii> > pq;

    pq.push(pii(0,src));
    d[src] = 0;

    while(pq.size())
    {
        int u = pq.top().second;
        pq.pop();
        vis[u] = 1;

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].first, w = adj[u][i].second;

            if(!vis[v] && d[v] > d[u]+w)
            {
                d[v] = d[u]+w;
                pq.push(pii(d[v],v));
            }
        }
    }
}

void init()
{
    for(int i=0; i<MAX; i++)
        adj[i].clear();
}
int main()
{
    FastRead

    int t,n,m,u,v,s,d,cas=1;
    int dist[MAX], dist2[MAX];

    cin >> t;

    while(t--)
    {
        init();

        cin >> n >> m;

        for(int i=0; i<m; i++)
        {
            cin >> u >> v;
            adj[u].push_back(pii(v,1));
            adj[v].push_back(pii(u,1));
        }

        cin >> s >> d;

        Dijkstra(s,dist);
        Dijkstra(d,dist2);

        int mx = 0;

        for(int i=0; i<n; i++)
            mx = max(mx,dist[i]+dist2[i]);

        cout << "Case " << cas++ << ": " << mx << endl;
    }
}
