#include <stdio.h>
#include <conio.h>


int main(){
int dur, jam, mnt, dtk;
int pls, jmlbyr, dbyr, kmbl;


printf("Durasi Bicara Anda (Detik) : "); scanf("%d ",&dur);

if (dur >= 3600) {
	jam= dur/3600;
	dur= dur%3600;
	mnt= dur/60;
	dur= dur%60;
	dtk= dur;
}
else if (dur<3600 && dur>=60) {
	jam = 0;
	mnt = dur/60;
	dur = dur%60;
	dtk = dur;
}
else {
	jam = 0;
	mnt = 0;
	dtk = dur;
}
	
printf("Anda Bicara Selama = %d jam : %d menit : %d detik", jam, mnt, dtk);

if (dur>30) {
	pls= dur/30;
	dur != 0;
	pls= pls+1;
}
else {
	pls=1;
}
printf("Jumlah Pulsa = %d/n", pls);
printf("Tarif Per Pulsa = Rp. 50");
jmlbyr=pls*50;
printf("Jumlah Bayar = ", jmlbyr);
printf("Dibayar = ", dbyr);
kmbl=dbyr-jmlbyr;
printf("Kembalian = ", kmbl);

return 0;
}
