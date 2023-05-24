#include <stdio.h>
#include <stdlib.h>
 
int deret(int x);
int main (){
int i,b;
 
printf("\nmasukkan batas akhir deret aritmatika"); scanf("%d",&b);
printf ("\nangka yang akan di jumlahkan adalah\n");
for (int i=1;i<=b;i++){
printf(" %d ",i);
}
printf("\nHasil penjumlahan angka 1 s/d %d adalah > %d\n",b,deret(b));
system ("pause");
return (0);
}
 
int deret (int x){
if(x==0){
return 0;
}
else return x+deret(x-1);
}
