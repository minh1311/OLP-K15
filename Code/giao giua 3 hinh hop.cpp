#include<bits/stdc++.h>
using namespace std;

pair <int ,int >	sosanh(int a1,int b1,int c1,int d1)
{
	if(a1<c1)
	{
		swap(a1,c1);
		swap(b1,d1);
	}
	if(b1<=c1)	return make_pair(0,0);
	else
	{
		int a= max(a1,c1);
		int b=min(b1,d1);
	return make_pair(a,b);
	}
}

main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,e1,e2,e3,f1,f2,f3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3>>d1>>d2>>d3>>e1>>e2>>e3>>f1>>f2>>f3;
	pair <int ,int > g1,g2,g3;
	g1=sosanh(a1,b1,c1,d1);
	g2=sosanh(a2,b2,c2,d2);
	g3=sosanh(a3,b3,c3,d3);
	pair <int ,int > d,r,c;
	d= sosanh(g1.first,g1.second,e1,f1);
	r= sosanh(g2.first,g2.second,e2,f2);
	c= sosanh(g3.first,g3.second,e3,f3);
	int dai=d.first-d.second;
	int rong=r.first-r.second;
	int cao=c.first - c.second;
	cout<<abs(dai*rong*cao);
}
