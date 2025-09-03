#include <stdio.h>

void  Sommateur() {
  unsigned long long result = 1;
  int n , i ;
  printf("Entrez un nembre");
      scanf("%d", &n);
    for (i = 1; i <= n; i++) {
      result = result + i;
    }
    printf("%llu\n", result);
}

int main() {
Sommateur();
return 0;
}
