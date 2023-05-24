#include <stdio.h>

int main()
{
	int j, i;
	
	for(i = 1; i <= 10; i++) {
		for (j = 1; j <= i/2; j++) {
			if (i % 2 == 0) {
				printf("%d ", i);
			}
				
		}
	}
}
