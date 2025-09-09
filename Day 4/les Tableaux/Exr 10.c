#include <stdio.h>

void  RechercheArray() {
int n , s ;
   printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les elements %d : ", i + 1); 
       scanf("%d", &arr[i]);
    }
    printf("quel numéro vous souhaitez rechercher :");
    scanf("%d" , &s);
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == s) {
            printf("Le nombre %d est exit et sa position est %d ", s , i+1);
            return ;
        }
    }
    printf("Le nombre n'est pas la");

}

int main() {  
RechercheArray();  
return 0;
}