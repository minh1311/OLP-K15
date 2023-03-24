#include<bits/stdc++.h>
using namespace std;

void flash()
{
		ios::sync_with_stdio(false);
		cin.tie(0);
		cout.precision(10);
}



main()
{
	flash()	;
	//khi dung fstream
	//mo file ->doc du lieu ->dong du lieu
	//cach 1 de mo file
	fstream ifs("file.txt",ios::in);//co the them ips::in hoac khong co
	//	neu mo file tu cho khac mo file tu location trong propities
	fstream ifs("C:\\Users\\ADMIN\\Desktop\\input.txt");// phai de"//" hoac / khong de"/"
	fstream ifs("C:/Users/ADMIN/Desktop/input.txt");
	
	
	//cach 2 de mo file
	fstream ifs;
	ifs.open("C:\\Users\\ADMIN\\Desktop\\input.txt");
	
	//khhi dung ifstream 
	ifstream ifs2("input.txt");
	
	size_t n;
	int * arr;
	ifs>>n;
	arr=new int [n];
	for(int i=0;i<n;i++)	ifs>>arr[i];
	
	ifs.close();
	
	//de doc den cuoi file
	while(!ifs.eof())
	{
		ifs>>number;
		cout<<number<<" ";
	}
	ifs.close();
	
	//neu muon doc tung dongf
	string s;
	while(!ifs.eof())
	{
		getline(ifs,s)
		cout<<s<<" "<<endl;
	}
	
	
	
	
	
	
	
	
	//GHI FILE
	
	fstream ofs("output.txt",ios::out); //neu muon ghi them vao file cos san  ios::app
	
	//cach 2
	fstream ofs
	ofs.open("output.txt",ios::out)
	
	string message = "Have a nice day";
	ofs<<message<<endl;
	ofs.close();
	
	//khong can tao file ghi truoc neu dung ios::out hoac ios::app
	
	
	//doi voi ofstream
	ofstream ofs2("output.txt");//khong can ios::out 
	//khi can them vao file cos san du lieu
	ofstream ofs2("output.txt",ios::app);
	
}

















