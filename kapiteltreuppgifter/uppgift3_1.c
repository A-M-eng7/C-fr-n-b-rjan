#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    //om man ringer mellan 33 högst är minuter
    //Om man ringer mellan 33 till till 66 är det Normal
    //Om man ringer mer än 66 då är den plus
    //skriva ett program 
    int minuter;

    //Få in data från användaren
    printf("Skriva in hur många minuter du ringer per månad: ");
    scanf("%d", &minuter);
    
    if(minuter<=0){
        printf("skriv ett tal som är större än noll");
    }
    else if (minuter<=33){
        printf("Vi rekommendrear att du köper minuter abonnemanget");
    }
    else if(minuter<=66 && minuter>33){
        printf("Vi rekommenderar att du köper Normal abonnemanget");
    }
    else if (minuter>66){
        printf("Vi rekommenderar att du köper Plus abonnemanget");
    }
}