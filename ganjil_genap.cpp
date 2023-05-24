#include <stdio.h>
#include <conio.h>

int main()
{
    int a1 = 0;
    int a2 = 0;
    int genap = 0;
    int ganjil = 0;

    while (a1 >= a2) {
        printf("MASUKAN BILANGAN PERTAMA: ");
        scanf("%d", &a1);
        printf("MASUKAN BILANGAN POSITIF KEDUA: ");
        scanf("%d", &a2);
    }
    
    printf("DERET BILANGAN TERSEBUT ADALAH ");
    for (int i = a1; i <= a2; i++) {
        printf("%d ",i);

        if (i % 2 == 0) {
            genap = genap + i;
        }
        else {
            ganjil = ganjil + i;
        }
    }

    printf("\n");

    printf("JUMLAH SELURUH BILANGAN GENAP DARI  %d  SAMPAI %d ADALAH %d\n", a1,a2,genap);
    printf("JUMLAH SELURUH BILANGAN GANJIL DARI %d SAMPAI %d ADALAH %d\n", a1,a2,ganjil);

    return 0;
}
