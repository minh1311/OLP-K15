#include<bits/stdc++.h>
using namespace std;


main(){
	int n;
	cin>>n;
	bool check[n+1];
		for(long long i=2;i<n;i++)
		{
		check[i]=true;
		}	
	for(long long i=2;i*i<n;i++){
		if(check[i]==true)
		for(long long j=i*i;j<=n;j+=i){
			check[j]=false;
		}
	}
	for(long long i=2;i<n;i++){
		if(check[i]==true)	cout<<"YES"<<" ";
	}
}
