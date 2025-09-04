#include <stdio.h>

void  Sommateur() {
  int n ;
  printf("Entrez un nembre:");
      scanf("%d", &n);
  unsigned long long result = n * (n+1)/2 ;
  printf("%llu\n", result);
}

int main() {
Sommateur();
return 0;
}
  