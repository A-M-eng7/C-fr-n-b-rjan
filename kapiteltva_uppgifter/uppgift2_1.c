#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf8");
    float A,V,r;
    const float PI = 3.141592653589793;

    //Få in data från användaren 
    printf("Skriva in sfärens radi här:");
    scanf("%f", &r);
    
    //Gör beräkningarna här
    A = 4*PI*r*r;
    V =(4*PI*r*r*r)/3;

    //Skriva ut resultatet
    printf("Baserat på radien du skriv in, så är Sfärens volym=%.2f och Sfärens area=%.2f",V,A);
}