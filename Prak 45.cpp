#include <stdio.h>
#include <conio.h>
main()
{
 char pilih;
 int b1,b2;

 printf("Masukan 2 buah bilangan  = "); scanf("%d %d",&b1, &b2);
 printf("Pilih tanda + - * /      = "); pilih=getche(); printf("\n");

 switch (pilih)
 {
  case '+' : printf("%d + %d = %d",b1,b2,b1+b2); break;
  case '-' : printf("%d - %d = %d",b1,b2,b1-b2); break;
  case '*' : printf("%d x %d = %d",b1,b2,b1*b2); break;
  case '/' : printf("%d : %d = %.2f",b1,b2,(float)b1/b2); break;
  default : puts("Salah input tanda…!"); 
 } 
getch(); 
}

