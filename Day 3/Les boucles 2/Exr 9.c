#include <stdio.h>

void power() {
long result = 1;
int base , exp ;
    printf("Entrez un nembre");
      scanf("%d", &base);
    printf("Entrez un nembre");
      scanf("%d", &exp);
    while ( exp > 0 ) { 
        result *= base; 
        exp--; 
    }
    printf("%ld\n", result);
}

int main() {
power();
return 0;
}

