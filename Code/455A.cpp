#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	long long a,b[100000],c[100000];
	for(long long i=0;i<=100000;i++)	b[i]=0;
	for(long long i=1;i<=n;i++)	
	{
		cin>>a;
		b[a]+=a;
	}
	c[1]=b[1];
	c[2]=max(c[1],b[2]);
	for(long long i=3;i<=100000;i++)
	{
		c[i]=max(c[i-1],c[i-2]+b[i]);
	}
	cout<<c[100000];
}
