#include <stdio.h>
#include <conio.h>
main()
{
 int sisa,hour,minute,second,TS,jp,jb,dbyr,kb;
 printf("WARUNG TELEKOMUNIKASI   \n");
 printf("------------------------\n");
 printf("DURASI BICARA [detik] \t: ");
 scanf("%d", &TS);
 
 int TotalSec = TS;
 hour=TS/3600;
 sisa=TS%3600;
 minute=sisa/60;
 second=sisa%60;
 printf ("\n\n Anda Bicara Selama %d Jam %d Menit %d Detik \n\n", hour,minute,second);
 
 //jp=TS%30;
 while(TotalSec > 0)
 {
    jp++;
    TotalSec -= 30;
 }
 jb=jp*50;
 
 printf ("JUMLAH PULSA    = %d Pulsa\n", jp);
 printf ("TARIF PER PULSA = Rp.50\n");
 printf ("JUMLAH BAYAR    = Rp. %d\n", jb);
 printf ("DIBAYAR         = Rp. "); scanf("%d", &dbyr);
 
 
 kb=dbyr-jb;
 printf ("KEMBALIAN       = Rp. %d\n", kb);
 getch();
}
