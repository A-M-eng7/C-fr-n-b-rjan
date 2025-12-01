#include <stdio.h>
int main(){
    int a, b;
    int sum, area;
    

    //Få in data från användaren
    printf("Skriva ett tal har: ");
    scanf("%d", &a);
    printf("Skriva en annan tal har: ");
    scanf("%d", &b);

    area = a * b;
    sum = a + b;

    //Skriva ut resultatet till användraren
    printf("Summan av dina tal ar:%d och arean ar:%d",sum, area);

}