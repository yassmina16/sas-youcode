#include <stdio.h>

void NImpairs() {
    int n ;
    printf("Entrez un nembre");
    scanf("%d", &n);
  for (int i = 1; i <= n; i++) { 
    printf("%d ", (2* i) - 1); 
  } 
}

int main () {
NImpairs();
return 0;
} 
