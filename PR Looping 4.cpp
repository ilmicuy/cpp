#include <stdio.h>
#include <conio.h>
#define minimumStudent 1

int main() 
{ int totalStudent, studentRegNumber, i;
float examScore, highestScore, averageScore, totalScore;
char studentName[20];

printf("\nJumlah Mahasiswa    : "); scanf("%d", &totalStudent);
printf("\nDaftar Nilai Ujian\n");
printf("Mata Kuliah : Pemrograman Terstruktur\n\n");

printf("NO      NIM         NAMA MAHASISWA          NILAI UJIAN\n");
printf("-------------------------------------------------------\n");

highestScore = 0.0;
totalScore = 0.0;
averageScore = 0.0;

for (i = minimumStudent; i <= totalStudent; i++) 
	{
	printf("%d.", i); 
    scanf("%d", &studentRegNumber); 
    scanf("%s", &studentName); 
    scanf("%f", &examScore);

    if (examScore > highestScore) 
		{ highestScore = examScore; }

        totalScore += examScore;
    }

printf("-------------------------------------------------------\n");

averageScore = totalScore/totalStudent;

printf("Jumlah Nilai    : %.2f\n", totalScore);
printf("Nilai rata-rata : %.2f\n", averageScore);
printf("Nilai terbesar  : %.2f\n", highestScore);

return 0;
}
