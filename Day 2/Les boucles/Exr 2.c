#include <stdio.h>

void fact() {
  unsigned long long resultat = 1 ;
  int n , i ;
  printf("Entrez un nembre");
  scanf("%d", &n);
    if (n < 0 ){
        printf("nombre négatif n'est pas définie\n");
    }
    for (i = 1; i <= n; i++) {
      resultat = resultat * i;
    }
    printf("%llu\n", resultat);
}

int main() {
fact();
return 0;
}
