#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > a;
 bool compare( pair<int,int> x,pair<int,int> y)
 {
 	if(x.first<y.first)
 		return true;
 	else if(x.first==y.first)
 	{
 		if(x.second<y.second)	return false;
 		else return true;
	 }
	 else return false;
 }
main()
{
	int n,w,h;
	sort(a.begin(),a.end(),compare);
	
	
}
