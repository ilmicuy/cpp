#include <stdio.h>
#include <conio.h>
#define minutePerHour 60
#define secondPerMinute 60
#define pulsaPrice 50.0

int main() 
{

    int startHour, startMinute, startSecond, endHour, endMinute, endSecond, totalHour, totalMinute, totalSecond,
        totalSecondStart, totalSecondEnd, totalSecondCall, pulsaTotal;
    float paymentTotal;

   printf("Durasi Bicara :");
   scanf("%d ",&totalSecondCall);

    
    

        
        // Computate total hour
        totalHour = (totalSecondCall/secondPerMinute)/minutePerHour;
        // Computate total minute
        totalMinute = ((totalSecondCall - ((totalHour*minutePerHour)*secondPerMinute))/secondPerMinute);
        // Computate total Second
        totalSecond = totalSecondCall - (((totalHour*minutePerHour)*secondPerMinute) + (totalMinute*secondPerMinute));

        // Computate pulsa total
        pulsaTotal = totalSecondCall/secondPerMinute;

        // if call 1 minute more, pulsa total increased by 1
        if (totalSecondCall%secondPerMinute > 0) {
            pulsaTotal += 1;
        }

        paymentTotal = pulsaTotal*pulsaPrice;

        printf("\n\n-------------------------------------\n");
        printf("TOTAL DURASI    = %d Jam : %d Menit : %d Detik\n", totalHour, totalMinute, totalSecond);
        printf("PULSA           = %d\n", pulsaTotal);
        printf("TOTAL BAYAR     = Rp.%.2f\n\n", paymentTotal);
	
getch();
}
