#include <stdio.h>
#include <conio.h>

int main() 
{ int a, b, i, holder, count;

do 
	{ printf("\nMasukkan bilangan pertama   : "); scanf("%d", &a);
      printf("masukkan bilangan kedua     : "); scanf("%d", &b);

    if (a >= 0 && b >= 0) 
		{ if (a%b == 0) 
			{
            holder = a;
            count = a/b;
            printf("\n%d / %d = %d\n\n", a, b, count);
            for (i = 1; i <= count; i++) 
				{
                holder -= b;
                printf ("%d - %d = %d {%d}\n", a, b, holder, i);
                a = b;
                }
            } else 
				{ printf("\nUlangi input data !! \n"); }
        }
    } 
while (a <= 0 && b <= 0 || a%b != 0);

return 0;
}
