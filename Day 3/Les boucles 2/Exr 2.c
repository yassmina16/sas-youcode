#include <stdio.h>

void PÉtoile() {
    int lignes; 
    printf("Entrez le nombre de lignes: ");
      scanf("%d", &lignes);
      for (int i = 1; i <= lignes; i++) { 
        for (int j = 1; j <= lignes - i; j++) {
        printf(" "); 
      } 
      for (int k = 1; k < (i * 2) - 1 ; k++) { 
      printf("*"); 
      } 
      printf("\n");
    }
}

int main() {
PÉtoile();
return 0;
}
