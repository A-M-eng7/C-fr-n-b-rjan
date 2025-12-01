#include<stdio.h>
#include<math.h>
#include<locale.h>  
#include<string.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");

    float n, antal_gånger = 0;

    while (1) {  
        printf("Ange bollens start höjd i meter (-1 för att avsluta): ");
        scanf("%f", &n);

        
        if (n == -1) {
            printf("Programmet avslutas.\n");
            break;
        }

        printf("\nBollen studsar och tappar 30%% av sin höjd vid varje studs.\n");

        
        while (n >= 0.0001) {
            n = n * 0.7;      
            antal_gånger++;

            if (n < 0.01) {  
                break;
            }
        }

        printf("\nBollen har nu studsat %.0f gånger innan höjden blev för liten för att räknas.\n", antal_gånger);

        antal_gånger = 0; 
    }

    return 0;
}
