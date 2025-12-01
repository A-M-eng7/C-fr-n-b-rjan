#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "sv_SE.utf-8");
    float k;

    for(float i = -1.0; i <= 1.1; i+=0.1) {
            k=2*i*i-5*i+1;
          printf("När x är: (%.1f), då är k lika med: %.1f\n", i, k);    
    }

    return 0;
}
