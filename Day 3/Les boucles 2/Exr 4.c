#include <stdio.h>

void rev() {
    int result = 0;
    int n ;
    printf("Entrez un nembre");
    scanf("%d", &n);
    while (n != 0) {
       int y = n % 10;
       result = result * 10 + y;
       n /= 10;
    }
    printf("%d", result);
}

int main() {
rev();
return 0;
}