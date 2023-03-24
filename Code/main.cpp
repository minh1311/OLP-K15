#include <bits/stdc++.h>

using namespace std;

void gop (int a[], int i, int mid, int j)
{
    int phantruoc[j+1],phansau[j+1],
        index1= i,
        index2= mid+1;

    for (int k=i ; k<=mid ; k++){
        phantruoc[k]=a[k];
    }
    for (int k=mid+1 ; k<=j ; k++){
        phansau[k]=a[k];
    }

    int index=i;

    while (index1<=mid and index2<=j){

//
        if (phantruoc[index1] < phansau[index2] )
        {
            a[index]=phantruoc[index1];
            index1++;
        }
        else
        {
            a[index]=phansau[index2];
            index2++;
        }
        index++;
    }
    while (index1 <=mid ) {
        a[index]=phantruoc[index1];
        index1++;
        index++;
    }
    while (index2 <=j ) {
        a[index]=phansau[index2];
        index2++;
        index++;
    }
}

void sapxep( int a[],int i , int j)
{
    if (i<j){

    //cout<<i<<" "<<j<<endl;
        sapxep(a, i, (i+j)/2);
        sapxep(a,(i+j)/2+1 , j);

        gop(a,i,(i+j)/2,j);


    }
}

int timkiem(int a[],int left,int right,int x)
{
    int mid=(left + right)/2;
    while (left<=right)
    {
        if (a[mid]== x) return (mid);

        if (a[mid]>x) right=mid-1;

        else left=mid+1;
        mid=(left+right)/2;
    }
    return(-1);
}

int calc(int a,  int n)
{
    if (n == 0) return (1);
    int x=calc(a,n/2);
    if ( n%2 == 0)

        return (x*x);
    else
        return (x*x * a);
}

int main()
{
   int n,x,a[100];
    cin>>n>>x;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    sapxep(a,1,n);

    for (int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<timkiem(a,1,n,x);

    int a,n;
    cin>>a>>n;
    cout<<calc(a,n);

}
