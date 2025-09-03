#include <stdio.h>

void calcules(float a, float b) {
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    printf("a / b = %.2f\n", a / b);
}

int main() {
calcules(10.0, 5.0);
return 0;
}