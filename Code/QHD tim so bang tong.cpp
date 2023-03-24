#include<bits/stdc++.h>
using namespace std;
main(){
	int n,s;
	cin>>n>>s;
	int a[n+1],L[s+1];
	long long sum=0;
	for(int i=0;i<=s;i++)	L[i]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		L[a[i]]=1;
		sum+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=s;j>=a[i];j--)
		{
			if(L[j]==0)
			{
				if(L[j-a[i]]==1 )	L[j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(L[i]==1)
		{
			for(int j=i+1;j<n;j++)	L[j]==1;
		}
	}
	
	if(L[s]==1)	cout<<"YES";
	else cout<<"NO";
}
