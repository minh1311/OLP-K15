#include<bits/stdc++.h>
using namespace std;
const int maxn= 1e3+5;
int n;
int a[maxn];
void hoi(int l,int r)
{
	cout<<"? "<<l<<" "<<r<<endl;
}
main()
{
	int n;
	cin>>n;
	int x,y,z;
	hoi(1,2);	cin>>x;
	hoi(1,3);	cin>>y;
	hoi(2,3);	cin>>z;
	a[1]=y-z;
	a[2]=x-a[1];
	a[3]=y-x;
	if(n==3)
	{
		cout<<"! ";
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		hoi(i-1,i);
		cin>>x;
		a[i]=x-a[i-1];
	}
	cout<<"! ";
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
