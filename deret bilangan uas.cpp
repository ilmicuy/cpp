#include <stdio.h>

void cetak_bilangan(void);

int i = 1;

int main() {
    cetak_bilangan();
}

void cetak_bilangan(void) {
    printf("%d", i);
    i++;
    if (i <= 10)
        cetak_bilangan();
}
