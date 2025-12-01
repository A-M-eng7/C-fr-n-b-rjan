#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    float n;

    //Få in data från användaren 
    printf("Skriva in hur många poäng du fick på provet: ");
    scanf("%f", &n);

    //Använda if stasen 
    if (n > 50 || n < 0) {
    printf("Poängen kan vara från 0 till 50, försök igen!\n");
    } else if (n >= 45) {
    printf("Du har fått A på provet\n");
    } else if (n >= 40) {
    printf("Du har fått B på provet\n");
    } else if (n >= 35) {
    printf("Du har fått C på provet\n");
    } else if (n >= 30) {
    printf("Du har fått D på provet\n");
    } else if (n >= 25) {
    printf("Du har fått E på provet\n");
    } else {
    printf("Du har blivit underkänd på provet\n");
}
}