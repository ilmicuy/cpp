#include <stdio.h>
#include <conio.h>

int main()
{
    char nama[20], huruf;
    float quiz,tugas,uts,uas,na;
    printf("Masukan Nama Mahasiswa:"); gets(nama);
    printf("Masukan Nilai Quiz    :"); scanf("%f", &quiz);
    printf("Masukan Nilai Tugas   :"); scanf("%f", &tugas);
    printf("Masukan Nilai UTS     :"); scanf("%f", &uts);
    printf("Masukan Nilai UAS     :"); scanf("%f", &uas);

    na = 0.1 * quiz + 0.2 * tugas + 0.3*uts + 0.4*uas;

    if (na>=80)huruf='A'; //lebih besar dari 80 (80-100)
    else if(na>=66)huruf='B'; //lebih besar dari 66 (66-79)
    else if(na>=46)huruf='C'; //lebih besar dari 46 (46-65)
    else if(na>=31)huruf='D'; //lebih besar dari 31 (31-45)
    else if (na>=0)huruf='E'; //lebih besar dari 0 (0-30)

    printf("Nama Anda   : %s\n",nama);
    printf("Nilai Akhir = %f Dengan Nilai Huruf = %c",na,huruf);


    getch();

return 0;
}
