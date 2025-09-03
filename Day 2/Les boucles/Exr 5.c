#include <stdio.h>

void power() {
long result = 1;
int base , exp ;
    printf("Entrez un nembre");
      scanf("%d", &base);
    printf("Entrez un nembre");
      scanf("%d", &exp);
    for (int i = 0; i < exp; i++) {
      result = result * base;
    }
    printf("%ld\n", result);
}

int main() {
power();
return 0;
}
