#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{

int i, jmhs, n_ujian[20];
char nim[3][20], namaMHS[15][20],hm[20];

do
{
	system("cls"); //menghapus layar
	printf("Jumlah Mahasiswa [Maks=20]= ");
	scanf("%d",&jmhs); fflush(stdin);
	if (jmhs>20)
		printf("Tidak boleh lebih dari 20 mahasiswa...SILAHKAN TEKAN ENTER...!");
	getch();
}
while (jmhs>20);

//input data nilai ujian mahasiswa
for(i=0; i<jmhs; i++)
{
	printf("Data Mahasiswa ke-%d\n", i+1);
	printf("Nomor Induk Mahasiswa = "); scanf("%s",&nim[i]); fflush(stdin);
	printf("Nama Mahasiswa        = "); gets(namaMHS[i]); fflush(stdin);
	printf("Nilai Ujian           = "); scanf("%d",&n_ujian[i]); fflush(stdin);
	
	//menentukan huruf mutu berdasarkan nilai ujian
	if (n_ujian[i]>=78) hm[i]='A';
	else if (n_ujian[i]>=68) hm[i]='B';
	else if (n_ujian[i]>=55) hm[i]='C';
	else if (n_ujian[i]>=35) hm[i]='D';
	else hm[i]='E';
}

	//menampilkan data nilai ujian dalam bentuk tabel
	puts("DAFTAR NILAI UJIAN LAB. PEMROGRAMAN DASAR");
	printf("\n\n");
	puts("NO NIM  NAMA MAHASISWA  N.UJIAN   HM");
	puts("------------------------------------");
	
	for(i=0;i<jmhs;i++)
	printf("%d  %s  %s            %d        %c\n",i+1,nim[i],namaMHS[i],n_ujian[i],hm[i]);
}
