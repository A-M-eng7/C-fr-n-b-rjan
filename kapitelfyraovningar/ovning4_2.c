#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "sv_SE.utf-8");
    float n, i=1, sum=0.0;

    //Få in data från användaren
    printf("Skriva in ett tal ?");
    scanf("%f", &n);

    while (n>=i)
    {
        sum=sum+(1.0/i);
        i++;
    }

    printf("Summan är: %.2f", sum);

    return 0;
}