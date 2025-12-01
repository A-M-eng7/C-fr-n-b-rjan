#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float minpermon, kostpermin, rabbat, prismrab;

    //Få in data från användaren 
    printf("Skriva in hur många minuter du ringer per månad: ");
    scanf("%f", &minpermon);
    printf("Skriv in också hur mycket kostar en min i kronor: ");
    scanf("%f", &kostpermin);

    //Gör en enkel beräkning här 
    rabbat = minpermon * kostpermin;
    //Använda if och else för att se om hen ska ha rabbat eller inte 
    if(rabbat>=1000){
        prismrab = rabbat - (rabbat * 0.1);
        printf("Du ska betal: %.2f kronor (med rabbat)", prismrab);
    }
    else{
        printf("Du ska betal: %.2f kronor", rabbat);
    }
}