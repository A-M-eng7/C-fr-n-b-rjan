#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
   float x1, x2, y1, y2,s;

   //Få in data från användaren
    printf("Skriv in X1: ");
    scanf("%f", &x1);
    printf("Skriv in Y1: ");
    scanf("%f", &y1);

    printf("Skriv in X2: ");
    scanf("%f", &x2);

    printf("Skriv in Y2: ");
    scanf("%f", &y2);

   //Gör beräkningarna här
   s =sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

   //Skriva ut info
   printf("Avståndet från (%.2f . %.2f) till (%.2f . %.2f) är: %.2f", x1,x2,y1,y2,s);
}