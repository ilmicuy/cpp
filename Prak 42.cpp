#include <stdio.h>
#include <conio.h>
main()
{
  int a,b,max;

printf("Masukan 2 buah bilangan = "); scanf("%d %d",&a,&b);

if (a>b)
{ max=a; }
else
{ max=b; }
 
printf("Bilangan terbesar adalah %d",max);
getch();
}

