#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "sv_SE.utf-8");
    int k;

    for(int i = -10; i <=10; i++) {
            k=2*i*i-5*i+1;
          printf("När x är: (%d), då är k lika med: %d\n", i, k);    
    }

    return 0;
}
