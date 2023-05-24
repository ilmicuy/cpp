#include <stdio.h> 
#include <conio.h>
#define PHI 3.14f
main()
{ //inisialisasi variabel 
 float l, r; 

 //input output 
 printf("input jari-jari = "); 
 scanf("%f", &r); 
 l=PHI*r*r; 
 printf("luas lingkaran %g", l); 

 getch();
}

