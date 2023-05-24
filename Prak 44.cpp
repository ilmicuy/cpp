#include <stdio.h>   
#include <conio.h>
main()
{       /* awal program */
char nama_kary[20], gol, status;
int jml_anak;
float gapok, tunj_si, tunj_anak, ppn, tot_gaji, gaber;

printf("Nama Karyawan  ? "); gets(nama_kary);fflush(stdin); 
printf("Golongan A/B/C ? "); gol=getche(); printf("\n");
fflush(stdin);
printf("Status 1=Menikah 0=Belum Menikah ?");
scanf("%c",&status); fflush(stdin);

  //menentukan gaji pokok karyawan
if (gol=='A') 
{ gapok=1000000; }
else if (gol=='B') 
{ gapok=2000000; }
else 
{ gapok=3000000; }
if (status=='1')  //kondisi status menikah
  { 
    tunj_si=15/100 * gapok;  
    printf("Jumlah anak ? "); scanf("%d",&jml_anak);
    fflush(stdin);
    
    if (jml_anak<=3)   // kondisi jumlah anak 
    { tunj_anak=0.05 * jml_anak * gapok; }
    else
    { tunj_anak=(float)10/100 * jml_anak * gapok;   }
  }
  else
  { tunj_si=0; tunj_anak=0; }
  
  tot_gaji=gapok + tunj_anak + tunj_si; 
  ppn=2/100 * tot_gaji; gaber=tot_gaji - ppn;
  printf("Total gaji = Rp. %.2f\n",tot_gaji);
  printf("Ppn        = Rp. %.2f\n ",ppn);
  printf("Gaji Bersih= Rp. %.2f ",gaber);
   
  getch(); 
}   /*akhir program */

