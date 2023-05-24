#include <stdio.h>
#include <conio.h>

int main() 
{ int a, b, i, holder;

    do { printf("\nMasukkan bilangan pertama   : "); scanf("%d", &a);
         printf("masukkan bilangan kedua     : "); scanf("%d", &b);
		if (a >= 0 && b >= 0) 
		{ holder = 0;
		for (i = 1; i <= b; i++) 
			{
            holder += a;
            	if (i == b) 
				{ printf ("%d ", a); } 
				else 
				{ printf ("%d + ", a); }
            }
			printf("= %d\n", holder);
        }
    } while (a <= 0 && b <= 0);
    
return 0;
}
