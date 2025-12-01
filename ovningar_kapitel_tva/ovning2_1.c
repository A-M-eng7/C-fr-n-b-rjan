#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Skriva in ditt forsta tal: ");
    scanf("%d", &a);

    printf("skriv in ett annan tal: ");
    scanf("%d", &b);
    c= a+b;
    d = a -b ;
    printf("Summan av dina tal ar:%d\n", c);
    printf("Skillnaden mellan forsta tal och andra tal ar:%d", d);

    return 0;
}