#include<stdio.h>
#include<math.h>
#include<locale.h>      

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    int n;
    int sum=0;
    // Få in data från användaren
    printf("skriva in ett tal: ")   ;
    scanf("%d", &n);

    for(int i =1; i<=n; i++){
        sum = sum + i;
    }
    printf("Summan är: %d\n", sum);
    return 0;
}