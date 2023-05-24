#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{
char hrf;
 
printf("Masukan sebuah huruf  = "); scanf("%c",&hrf);
 
switch (toupper(hrf))
 {
case 'A' : 
case 'I' : 
case 'U' : 
case 'E' : 
case 'O' : printf("%c adalah huruf Vokal",hrf);
default  : printf("%c bukan huruf Vokal",hrf); 
 } 

getch(); 
}

