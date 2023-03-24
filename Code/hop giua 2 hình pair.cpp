#include<bits/stdc++.h>
using namespace std;
pair <int,int> ha(int a,int b,int c,int d)
{
	if(b<=c and a>=d)	return make_pair(0,0);
	else 
		return make_pair(max(a,c),min(b,d));
}

void hopgiuahaihinh(int a1,int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3,int a4,int b4,int c4)
{
	int dai,rong,cao ;
	pair<int,int> h1,h2,h3;
	h1=ha(a1,a2,a3,a4);
	dai=h1.first-h1.second;
	
	h2=ha(b1,b2,b3,b4);
	rong=h1.first-h2.second;
	h3=ha(c1,c2,c3,c4);
	cao=h3.first-h3.second;
		cout<<dai<<" "<<rong<<" "<<cao<<endl;
	cout<<abs(dai*rong*cao);
}

main(){
	int a1,b1,c1,a2,b2,c2,a3,b3,c3,a4,b4,c4;
	cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3>>a4>>b4>>c4;
	hopgiuahaihinh(a1,b1,c1,a2,b2,c2,a3,b3,c3,a4,b4,c4);
}
