#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{ int jjl;  float Honor=300000,tunjj,tunjp,u_lembur,tot_upah;
  char gol,pdk,nama[20];

 printf("Nama Karyawan              : "); gets(nama);
 printf("Golongan 1/2/3             : "); gol=getche(); printf("\n");
 fflush(stdin);
 printf("Pendidikan M=SMU D=D3 S=S1 : "); scanf("%c",&pdk);
 printf("Jumlah jam lembur          : "); scanf("%d",&jjl);

 //menentukan tunjangan jabatan berdasarkan golongan
 if (gol=='1') tunjj=(float)5/100*Honor;
 else if (gol=='2') tunjj=(float)10/100*Honor;
 else if (gol=='3') tunjj=(float)15/100*Honor;
 else tunjj=0;

 //menentukan tunjangan pendidikan
 switch (toupper(pdk))
 {
  case 'M' : tunjp=(float)2.5/100*Honor; break;
  case 'D' : tunjp=(float)5/100*Honor; break;
  case 'S' : tunjp=(float)7.5/100*Honor; break;
  default  : tunjp=0;
 }
//menentukan upah lembur
 if (jjl>8)
   u_lembur=(float)(jjl-8)*20000;
 else
   u_lembur=0;

 //total upah
 tot_upah=Honor+tunjj+tunjp+u_lembur;

 printf("Honor Kontrak        = Rp. %.2f\n",Honor);
 printf("Tunjangan Jabatan    = Rp. %.2f\n",tunjj);
 printf("Tunjangan Pendidikan = Rp. %.2f\n",tunjp);
 printf("Uang Lembur          = Rp. %.2f\n",u_lembur);
 printf("TOTAL UPAH           = Rp. %.2f\n",tot_upah);
 getch();
}

