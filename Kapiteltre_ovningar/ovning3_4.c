#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    //minnmått längd:140mm, bredd:90mm
    //maxmått längd:600,tjocklek: 100mm, maxmått måste vara 900mm där bredd+tjocklek+ längd

    //skriva ut antingen Måtten OK eller Felaktig Mått 
    float längd, bredd, tjocklek, tot;

    //Få in data från användaren 
    printf("Skriva in längden på din vara: ");
    scanf("%f", &längd);
    printf("Skriva in bredden på din vara: ");
    scanf("%f", &bredd);
    printf("Skriva in tjockleken på din vara:");
    scanf("%f", &tjocklek);

    tot = längd + bredd + tjocklek;
    //Avgöra om det är ok eller inte 
    if(längd< 140 && bredd <90){
        printf("Du har för små paket");
    }
    else if (tot>900 && tjocklek>100 && längd>600){
        printf("Du har för stor paket vi kan inte leverera ditt paket");
    }
    else{
        printf("Dit paket matchar våra mått och vi kan leverare ditt paket");
    }

}