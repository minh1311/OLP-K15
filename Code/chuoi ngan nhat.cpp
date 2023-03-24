#include<bits/stdc++.h>
using namespace std;


main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i,n;i++){
		cin>>a[i];
	}
	int sum=a[0],i=1,j=1;
	int ans=0;
	while(i<=n){
		if(sum<k){
			i++;
			sum+=a[i];
		}
		else {
			ans=min(ans,i-j+1);
			sum=sum-a[j];j++;
		}
	}if(ans==0)	cout<<-1;
	else cout<<ans;
}
