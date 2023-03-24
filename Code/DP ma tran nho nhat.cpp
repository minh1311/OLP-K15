#include<bits/stdc++.h>
using namespace std;
main()
{
	int m,n;
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
	for(int i=2;i<=m;i++)
	{
		a[1][i]+=a[1][i-1];
	}
	for(int i=2;i<=n;i++)
	{
		a[i][1]+=a[i-1][1];
	}
	for(int i=2;i<=m;i++)
	{
		for(int j=2;j<=n;j++)
		{
			a[i][j]=min(a[i-1][j],a[i][j-1])+a[i][j];
		}
	}
	cout<<endl;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)	
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<a[m][n];
}
