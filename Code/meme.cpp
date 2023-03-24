#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
void _sort(int A[],int l,int m,int r){
    int n1 = m - l + 1,n2 = r - m;
    int L[n1],R[n2];
    for(int i = 0;i<n1;i++) L[i] = A[i + l];
    for(int i = 0;i<n2;i++) R[i] = A[i + m + 1];
    int i = 0,j = 0,k = l;
    while(i < n1 && j < n2){
        if(L[i] < R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        A[k] = R[j];
        j++;
        k++;
    }
}
void merge(int A[],int l,int r){
	if(l < r){
		int m = (l + r) / 2;
		merge(A,l,m);
		merge(A,m+1,r);
		_sort(A,l,m,r);
	}
}
int main(){
	int n; cin >> n;
	int A[n];
	for(int i = 0;i<n;i++){
		cin >> A[i];
	}
	merge(A,0,n);
    for(int i = 0;i<n;i++){
        cout << A[i] << " ";
    }

}
