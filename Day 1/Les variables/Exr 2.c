#include <stdio.h>

void CelsiusAKelvin(float celsius) {
     float kelvin = celsius + 273.15;
        printf("%.2f\n", kelvin);
}

int main() {
CelsiusAKelvin(16.0);
return 0;
}