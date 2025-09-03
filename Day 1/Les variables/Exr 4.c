#include <stdio.h>

void convertVitesse(float kmh) {
    float ms = kmh * 0.27778;
      printf("%.2f \n", ms);
}
int main() {
convertVitesse(120.5);
return 0;
}