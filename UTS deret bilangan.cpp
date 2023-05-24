#include <stdio.h>
#include <conio.h>

int main()
{
	int j, i, k=1;
	
	for(i = 10; i >= 1; i--) {
		if (i % 2 == 0) {
			for (j = 1; j <= k; j++) {
			
				printf("%d ", i);
			}k++;
				
		}
	}
}
