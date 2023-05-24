#include <stdio.h> 
#include <conio.h>
main()
{ 
 //inisialisasi variabel 
  int a=12, b=2, c=3, d=4; 

  //output 
  printf("a %% b = %d\n", a%b); 
  printf("a - c = %d\n", a-c); 
  printf("a + b = %d\n", a+d); 
  printf("a / d = %d\n", a/d); 
  printf("a / d * d + a %% d = %d\n", a/d*d+a%d); 
  printf("a %% d / d * a - c = %d\n", a%d/d*a-c); 
 
  getch();  //tahan tampilan layar
}

