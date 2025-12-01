#include<stdio.h>

int main(){
    int a;
    int momssatsen;
    int delsmoms;
    int exkulsive;

    //Få en data från användaren
    printf("Skriva in varans pris, inklusive moms:");
    scanf("%d", &a);
    printf("Skriva in momssatsen:");
    scanf("%d", &momssatsen);

    //Gör räkningarn här
    delsmoms = a /  (1+momssatsen/100.0);
    exkulsive = a - delsmoms;
    
    
    //Skriva ut resultate
    printf("Varans pris exklusive moms ar:%d och varans dels momsen ar:%d", exkulsive, delsmoms);
}