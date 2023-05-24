#include <stdio.h>
#include <conio.h>

int main() 
{ int number;

for (number = 10; number <= 100; number++) 
	{
    if (number % 2 == 0) 
		{
        if (number % 5 == 0) 
			{ printf("%d ", number); }
        }
    }

return 0;
}
