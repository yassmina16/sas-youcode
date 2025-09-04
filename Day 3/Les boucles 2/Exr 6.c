#include <stdio.h>

void fact() {
  unsigned long long result = 1 ;
  int n ;
  int i = 0; 
  printf("Entrez un nembre:");
  scanf("%d", &n);
    if (n < 0 ){
        printf("nombre négatif n'est pas définie\n");
    }
    while(i <= n) {
      result = result * i;
      i++;
    }
    printf("%llu\n", result);
}

int main() {
fact();
return 0;
}