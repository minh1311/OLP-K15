#include<iostream>
#include<math.h>
using namespace std;
void nhapMang(float a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatMang(float a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void average(float a[],int n){
	float sum=0;
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>10)
		{
			sum+=a[i];
			dem++;
		}
	}
	float k=sum/(float)dem;
	cout<<"Tong trung binh cong la: "<<k;
}
float primeNumber(int a){
	if(a<2){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
void insert1(float a[],int &n,int vt,int b){
	for(int i=n;i>vt;i--){
		a[i]=a[i-1];
	}
	a[vt]=b;
	n++;
}
void insert2(float a[],int &n,int b){
	if(primeNumber(b)==1){
		cout<<"Khong the chen";
	}else{
		for(int i=0;i<n;i++){
			if(primeNumber(a[i])==1){
				insert1(a,n,i,b);
				i++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	int n,b;
	cout<<"Nhap n";
	cin>>n;
	float a[n];
	nhapMang(a,n);
	xuatMang(a,n);
	cout<<endl;
	cout<<"Nhap b";
	cin>>b;
	average(a,n);
	cout<<endl;
	insert2(a,n,b);
	
}
