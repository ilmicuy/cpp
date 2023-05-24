#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{ /* Awal Program*/
char np[25], tp;
int hpk, jpa; 

printf("Nama Pelanggan			="); gets(np);
printf("Tipe Pelanggan A/B/C		="); scanf("%c",&tp);

tp=toupper(tp);
if		(tp=='A') hpk=1500;
else if	(tp=='B') hpk=2000;
else hpk=2500;

printf("Harga per Kubik			= Rp.%d\n",hpk);
printf("Volume air yang digunakan	="); scanf("%d",&jpa);
puts("-------------------------------");
printf("Total Bayar				= Rp.%d",hpk*jpa);
getch();
}
