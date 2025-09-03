#include <stdio.h>

void  Sommateur() {
  unsigned long long resultat = 1;
  int n , i ;
  printf("Entrez un nembre");
      scanf("%d", &n);
    for (i = 1; i <= n; i++) {
      resultat = resultat + i;
    }
    printf("%llu\n", resultat);
}

int main() {
Sommateur();
return 0;
}
