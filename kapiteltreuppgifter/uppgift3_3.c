#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    int n;

    //Få in data från användaren 
    printf("Skriva in ditt postnummer:");
    scanf("%d", &n);

    //Kontroller om användaren skriv in minst 5 siffrig tall
    if(n < 10000 || n > 99999){
    printf("Du skrev in fel nr, ett postnummer består av fem siffror!");
    }
    int rakna = n /1000;
    if((rakna >= 20 && rakna <= 62) || rakna == 65 || rakna == 66){
        printf("Distriktet ligger i Götaland");
    }
    else if(rakna>=80){
        printf("distriktet ligger i Norrland");
    }
    else{
        printf("Distriktet ligger i Sveland");
    }

    return 0;
}