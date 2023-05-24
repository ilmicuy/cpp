#include <stdio.h> 
#include <conio.h>
main()
{
 int i, nilai[10], jml=0;
 float rata_rata;

  for(i=0; i<5; i++)
 {
  printf("Data nilai ke-%d = ",i+1);
  scanf("%d",&nilai[i]);
    jml+=nilai[i];
 }   
 rata_rata=(float)jml/i;
 printf("Jumlah semua bilangan = %d\n",jml);
 printf("Rata-ratanya          = %.2f\n",rata_rata);

 getch();
}

