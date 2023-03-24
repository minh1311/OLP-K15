#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
vector<int> a[maxn];
int n,m;
bool check[maxn];// a[i]=0 -> chua dc duyet
// a[i]=1->da duyet
void dps(int x)
{
	//cachs 1
	check[x]=1;// danh dau da duyet
	for(int i=0;i<a[x].size();i++)
	{
		if(check[a[x][i]]==0)
		{
			dfs(a[x][i]);
		}
	}
	
	// cachs 2
	stack<int> s;
	s.push(x);
	check[x]=1;
	while(s.size())
	{
		int e=s.top();
		s.pop();
		cout<<e<<" ";
		for(int i=0;i<a[e].size();i++)
		{
			if(check[a[e][i]]==0)
			{
				check[a[e][i]]==1;
				s.push(a[e][i]);
			}
		}
	}
}

main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dps(1);
}


