#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{ char kb,kk[2],notran[3],nbuah[15],namak[20];
  float jbayar,bayar,dibayar,diskon,hb,kembalian;
  int jb;

 puts("TOKO BUAH FRUITT FRESH");
 puts("----------------------");
 printf("No Transaksi          = "); scanf("%s",&notran); fflush(stdin);
 printf("Kode Kasir [BM/RG/DM] = "); scanf("%s", &kk); fflush(stdin);
 puts("----------------------");
 printf("Kode Buah [A/K/S]     = "); scanf("%c",&kb); fflush(stdin);
 printf("Jumlah Beli           = "); scanf("%d",&jb); fflush(stdin);
 puts("-----------------------");

 //harga buah
 switch (kb)
 {
  case 'A' : case 'a' :  hb=35000; strcpy(nbuah,"Anggur Red Cuurant"); break;
  case 'K' : case 'k' :  hb=25000; strcpy(nbuah,"Kiwi Selandia"); break;
  default  :  hb=20000; strcpy(nbuah,"Sunkist Orange");
 }

 //nama kasir
 if (kk == "BM") strcpy(namak,"BIMA");
 else if (kk == "RG") strcpy(namak,"RANGGA");
 else if (kk == "DR") strcpy(namak,"DIRA");
 else strcpy(namak,"NONAME");

 printf("\nNo Transaksi : %s\n",notran);
 printf("\nNama Kasir %s\n",namak);
 puts("---------------------------------------------------------");
 printf("Nama Buah yang dibeli : %s\n",nbuah);

 bayar=(float)hb*jb;
 diskon=bayar*0.05;
 jbayar=bayar-diskon;

 printf("Diskon                = Rp. %.2f\n",diskon);
 printf("Jumlah Bayar          = Rp. %.2f\n",jbayar);
 printf("Dibayar               = Rp. "); scanf("%f",&dibayar);
 kembalian=dibayar-jbayar;
 printf("Kembalian             = Rp. %.2f",kembalian);
 getch();
}

