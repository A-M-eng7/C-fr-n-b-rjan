#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float year, biljett, antaldagar, tot, skillnade;

    //Få in data från användaren 
    printf("Vad kostar årskortet på ditt gym ? ");
    scanf("%f", &year);
    printf("Vad kosta en biljett per dag ? ");
    scanf ("%f", &biljett);
    printf("Hur många dagar planerar du att gymma ? ");
    scanf("%f", &antaldagar);

    //Gör beräkningarna här 
    tot = biljett * antaldagar;

    //Kontroller om det är värt att köpa årskort
    if (tot>year){
        skillnade = tot - year;
        printf("Jag rekomnderar att du köper ett år kort för att du kommer spara %.2f kronor", skillnade);
    }
    else{
        printf("Om du köper enkel biljett kommer du att betala %.2f för %.2f dagar", tot, antaldagar);
    }
}