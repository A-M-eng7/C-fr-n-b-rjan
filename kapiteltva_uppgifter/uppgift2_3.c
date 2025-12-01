#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float mile, galon;
    

    //Få in data från användaren 
    printf("Skriva in miles");
    scanf("%f", &mile);

    printf("Skriv in galon");
    scanf("%f", &galon);

    //Gör beräkningar
    float km  =  mile * 1.609;
    float liter = galon * 3.785;

    //Skriva ut resultat
    printf("Det motsvara%.2f km och %.2f liter", km, liter);
}