#include <stdio.h>

void Fact() {
long long Result = 1;
int n , i ;
  printf("Entrez un nembre:");
  scanf("%d", &n);
    if (n < 0 ){
        printf("nombre négatif n'est pas définie\n");
    }
    for (int i = 1; i <= n; ++i) {
        Result  *= i ;
    }
    printf("Factorial : %lld\n", Result);
}

int main() {
Fact();
return 0;

}