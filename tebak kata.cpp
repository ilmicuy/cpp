#include <stdio.h>
#include <ctype.h>

void tebak_angka(void);

int main() {
    tebak_angka();
    printf("Tekan Enter untuk kembali ke sorce");
}

void tebak_angka() {
    int angka; char jawab;

    printf("masukkan bilangan bulat positif [1-10] : ");
    scanf("%d", &angka);

    switch (angka) {
        case  7 : puts("Jawaban ANDA benar"); break;
        default : puts("Jawaban ANDA salah!");
    }

    printf("Mau coba nebak lagi [Y/T]?");
    scanf("%c", &jawab);

    if (toupper(jawab) == 'Y') {
        tebak_angka();
    }

}
