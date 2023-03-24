#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<ll,ll>
const ll maxn = 1e5+5;
const ll oo = 1e12+5;
ll d[maxn]; /// d[i] la khoang cach 1 - > i
ll pa[maxn];
ll n,m;
vector<ii> a[maxn];
priority_queue< ii,vector<ii> , greater<ii>  > q;
void Dijikatra()
{
    q.push(ii(0,1));
    pa[1] = 1;
    while(q.size())
    {
        ii e = q.top();
        q.pop();
        ll fi = e.first; ll se = e.second;
        for(int i=0;i<a[se].size();i++)
        {
            ll w = a[se][i].first;
            ll ve = a[se][i].second;
            if( d[ve] > d[se] + w )
            {
                d[ve] = d[se] + w;
                pa[ve] = se;
                q.push(ii(d[ve],ve));
            }
        }
    }
}
void print(int x)
{
    if(x==1)return;
    print(pa[x]);
    cout<<x<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        a[u].push_back(ii(w,v));
        a[v].push_back(ii(w,u));
    }
    for(int i=1;i<=n;i++)
        d[i]=oo; d[1]=0;
    Dijikatra();
    if( d[n] == oo)
    {
        cout<<-1; return 0;
    }
    cout<<1<<" ";
    print(n);
}
