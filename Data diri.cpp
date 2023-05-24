#include<iostream>
using namespace std;
int gol1=1000000, gol2=1500000, gol3=2000000;
int minggu=48;
int gol123, jam, jumlah ;
int main()
{
	char nama [30];
	cout<<" Nama              : ";
	cin>>nama ;
	cout<<" Golongan Ke-      : ";
	cin>>gol1,gol2,gol3;
	cout<<" Minggu ke-1       : ";
	cin>>jam;
	cout<<" Minggu ke-2       : ";
	cin>>jam;
	cout<<" Minggu ke-3       : ";
	cin>>jam;
	cout<<" Minggu ke-4       : ";
	cin>>jam;
	jumlah= gol1 + jam-minggu;
	cout<<" Total Keseluruhan Gaji : "<< jumlah<<endl;
	jumlah= gol2 + jam-minggu;
	cout<<" Total Keseluruhan Gaji : "<< jumlah<<endl;
	jumlah= gol3 + jam-minggu;
	cout<<" Total Keseluruhan Gaji : "<< jumlah<<endl;

	if(gol1>48)
	{
		cout<<jumlah;
	}
	else if(gol2>48)
	{
		cout<<jumlah;
	}
	else if(gol3>48)
	{
		cout<<jumlah;
	}
	return 0;
}
