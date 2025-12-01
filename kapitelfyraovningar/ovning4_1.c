#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    int n;
    int i= 0;
    int sum=0;
    int k;

    //Få in data från användaren
    printf("Skriva in ett tal ?");
    scanf("%d", &n);

    while(n>i){
        k=n*n;
        sum=sum+k;
        n--;
    }
    printf("Summan av kvadraterna är: %d", sum);

    return 0;
}