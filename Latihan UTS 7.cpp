#include <stdio.h>
#include <conio.h>
main()
{ long jt; int s1,s2,s3,s4,s5,s6,s7,s8;

 printf("Jumlah Uang Kembali = "); scanf("%ld",&jt);
 puts("Pecahan uang kembali :");

 s1=jt/50000;
 s2=(jt%50000)/20000;
 s3=((jt%50000)%20000)/10000;
 s4=(((jt%50000)%20000)%10000)/5000;
 s5=((((jt%50000)%20000)%10000)%5000)/2000;
 s6=(((((jt%50000)%20000)%10000)%5000)%2000)/1000;
 s7=((((((jt%50000)%20000)%10000)%5000)%2000)%1000)/500;
 s8=(((((((jt%50000)%20000)%10000)%5000)%2000)%1000)%500)/100;

 printf("%d lembar 50.000\n",s1);
 printf("%d lembar 20.000\n",s2);
 printf("%d lembar 10.000\n",s3);
 printf("%d lembar 5.000\n",s4);
 printf("%d lembar  2000\n",s5);
 printf("%d lembar  1000\n",s6);
 printf("%d lembar   500\n",s7);
 printf("%d lembar   100\n",s8);

 getch();
}

