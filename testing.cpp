#include<iostream>
using namespace std;
int main()

{
	cout<<" Menghitung Gaji Karyawan"<<endl;
	
	char nama[30];
	int jamkerja, gajipokok, gajilembur, gajitotal, gol;
	
	cout<<" Nama Karyawan		: ";
	cin>>nama;
	cout<<" Golongan			: ";
	cin>>gol;
	cout<<" Jam Kerja			: ";
	cin>>jamkerja;
	
	if (gol==1)
		{
			gajipokok = 1000000;
		}
		else if (gol==2)
		{
			gajipokok = 1500000;
		}
		else if (gol==3)
		{
			gajipokok = 2000000;
		}

		
	gajilembur = 20000;
	gajitotal = gajipokok;
		
	if (jamkerja > 48)
		{
			gajitotal = gajipokok + ((jamkerja - 48)*20000);
				
		}
		
	cout<< nama<<" Menerima  Rp "<<gajitotal<<endl;;
	
	return 0;
		
		
}
