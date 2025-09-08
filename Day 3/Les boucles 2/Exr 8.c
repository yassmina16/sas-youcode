#include <stdio.h>

void cherche(int arr[]) {
    int taille = 10 ; 
    int n; 
    int fin = taille - 1;
    int debut = 0;
    printf("Entrez un nembre:");
    scanf("%d" , &n);
    while (debut <= fin) {
      int milieu = (debut + fin) / 2;
      if (arr[milieu] == n) {
          printf("Le nombre est la");
      return;
     }
     if (arr[milieu] < n) {
         debut = milieu + 1;
     } else {
         fin = milieu - 1;
     }

   }
   printf("Le nombre n'est pas la");
}
int main() {
int arr[] = {1 , 2 , 4 , 8 , 16 , 32 , 64 , 5 , 89 , 0  };
cherche (arr);
return 0;
}