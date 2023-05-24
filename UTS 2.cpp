#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j=0;
	
	j=0;
	for (i = 10;i >=2; i--) {
		if (i % 2 == 0) {
			printf("%d ", i);
			j++;
			printf("%d ", j);
		}
	}
}
