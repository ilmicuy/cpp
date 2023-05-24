#include <stdio.h>
#include <conio.h>
main()
{
 int suhu;

printf("Masukkan Nilai Suhu = "); scanf("%d", &suhu);

if (suhu<=0)
{
printf("Kondisi Beku");
}
else if (suhu>0 && suhu<= 100)
{
printf("Kondisi Cair");
}
else
{
printf("Kondisi Uap");
}
 getch(); 
}


