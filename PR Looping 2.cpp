#include <stdio.h>
#include <conio.h>

int main() 
{ int i, input, rowPosition = 1, numberPosition = 0;

printf("Masukkan Angka  : "); scanf("%d", &input);
printf("\n");

for (i = 1; i <= input; i++) 
	{
	if (i <= 9) 
		{ printf("  %d ", i); } 
	else 
		{ printf(" %d ", i); }
        
    numberPosition++;

    if (numberPosition == rowPosition) 
		{
        rowPosition++;
        printf("\n");
        numberPosition = 0;
        }
    }
    printf("\n");

return 0;
}

