#include <stdio.h>

void fact() {
  unsigned long long result = 1 ;
  int n , i ;
  printf("Entrez un nembre:");
  scanf("%d", &n);
    if (n < 0 ){
        printf("nombre négatif n'est pas définie\n");
    }
    for (i = 1; i <= n; i++) {
      result = result * i;
    }
    printf("%llu\n", result);
}

int main() {
fact();
return 0;
}
