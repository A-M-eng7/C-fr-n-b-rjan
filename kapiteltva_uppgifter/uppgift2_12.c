#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float C, F;

    //Få en data från användaren
    printf("!!!Ett program som omvandla Fahrenheit till Celsius!!!\n");
    printf("Skriva in temperaturen i Fahrenheit:");
    scanf("%f", &F);

    //Gör beräkningaren här 
    C = ( (F-32.0) *5.0) / 9.0;

    //Skriva ut resultaten
    printf("%.2f i Fahrenheit motsvara %.2f i Celsius.",F,C);
}