#include <stdio.h>
#include <conio.h>
int main()
{ int nomor, ribuan, ratusan, puluhan, satuan;

printf("Memisahkan Angka ke Pecahannya\n");
printf("------------------------------\n\n");

printf("Masukan angka dalam RIBUAN = "); scanf("%d", &nomor);

ribuan  = nomor/1000;
ratusan = (nomor/100)%10;
puluhan = (nomor%10)/10;
satuan  = (nomor%100)%10;

printf("%d RIBUAN %d RATUSAN %d PULUHAN %d SATUAN\n", ribuan, ratusan, puluhan, satuan);

getch();
return 0; 
}
