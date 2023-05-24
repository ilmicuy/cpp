#include <stdio.h> 
#include <conio.h>
main()
{ //inisialisasi variabel 
  int C, F; 

    //input output 
  printf("Program Konversi Suhu Celcius Ke Fahrenheit\n\n"); 
  printf("Input : "); scanf("%d", &C); 
  F = C*1.8+32; 
  printf("Output : %d Fahrenheit\n", F); 

  getch();  //tahan tampilan layar
}

