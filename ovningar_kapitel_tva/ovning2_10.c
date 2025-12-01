#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float t1, t2, t3, t4, t5, t6, t7;
    float maxTemp;

    printf("Ange temperatur kl 13 (måndag): ");
    scanf("%f", &t1);

    printf("Ange temperatur kl 13 (tisdag): ");
    scanf("%f", &t2);
    maxTemp = fmax(t1, t2);

    printf("Ange temperatur kl 13 (onsdag): ");
    scanf("%f", &t3);
    maxTemp = fmax(maxTemp, t3);

    printf("Ange temperatur kl 13 (torsdag): ");
    scanf("%f", &t4);
    maxTemp = fmax(maxTemp, t4);

    printf("Ange temperatur kl 13 (fredag): ");
    scanf("%f", &t5);
    maxTemp = fmax(maxTemp, t5);

    printf("Ange temperatur kl 13 (lördag): ");
    scanf("%f", &t6);
    maxTemp = fmax(maxTemp, t6);

    printf("Ange temperatur kl 13 (söndag): ");
    scanf("%f", &t7);
    maxTemp = fmax(maxTemp, t7);

    printf("\nDen högsta uppmatta temperaturen ar: %.1f\n", maxTemp);

    return 0;
}