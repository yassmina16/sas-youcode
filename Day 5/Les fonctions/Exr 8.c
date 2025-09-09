#include <stdio.h>

void isPair() {
int n ; 
    printf("Entrez un nembre:");
        scanf("%d", &n);
    if (n % 2 == 0) {
        printf("1");
    } else {
        printf("0");
    }
}

int main() {
isPair();
return 0;
}