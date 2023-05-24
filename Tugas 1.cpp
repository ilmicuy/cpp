#include <stdio.h>
#include <conio.h>
#define HARGA_BENSIN 6700
int main()
{ float totalharga, jumlahbensin;
int jaraktempuh;
jaraktempuh = 130;

//jumlah bensin per liter
jumlahbensin = jaraktempuh/18.0;

//total harga yang harus dibayar
totalharga = jumlahbensin*HARGA_BENSIN;

//output
printf("Menghitung Estimasi Biaya Perjalanan\n");
printf("------------------------------------\n\n");
printf("Jarak tempuh dari jakarta ke bandung : %d KM\n", jaraktempuh);
printf("Jumlah bensin yang diperlukan        : %.2f L\n", jumlahbensin);
printf("Biaya yang diperlukan                : Rp.%.2f\n", totalharga);

getch();
return 0;
}
