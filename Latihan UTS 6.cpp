#include <stdio.h>
#include <conio.h>
main()
{int jjl;  float tunj, upah_lembur, gapok, tot_gaji;
 char nama[20], nopeg[3];

 printf("Nomor Pegawai     = "); scanf("%s",&nopeg);  fflush(stdin);
 printf("Nama Pegawai      = "); gets(nama);
 printf("Gaji Pokok        = Rp. "); scanf("%f",&gapok);
 printf("Jumlah Jam Lembur = "); scanf("%d",&jjl);

 //hitung tunjangan
 tunj=0.15*gapok;

 //hitung upah lembur
 upah_lembur=(float)3/100*gapok*jjl;

 //hitung Total Gaji
 tot_gaji=gapok+tunj+upah_lembur;

 printf("Gaji Pokok        = Rp. %.2f\n",gapok);
 printf("Tunjangan         = Rp. %.2f\n",tunj);
 printf("Upah Lembur       = Rp. %.2f\n",upah_lembur);
 printf("Total Gaji        = Rp. %.2f\n",tot_gaji);
 getch();
}


