#include<bits/stdc++.h>
using namespace std;




int check(int a[],int n)
{
	int j=-1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1]	&& a[i]%2==1)
		{
			j=i;
			return j;
		}
	}
return -1;
}
void xoa(int a[],int &n)
{
	int vt=check(a,n);
	if(vt>-1)
	{
		for(int i=vt;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		n--;
	}
	
	for(int i=0;i<n;i++)	cout<<a[i]<<" ";
}
main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)	cin>>a[i];

	xoa(a,n);	
}


