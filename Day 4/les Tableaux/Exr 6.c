#include <stdio.h>

void FacteurArray() {
int n , F ;

   printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   printf("Entrez un nembre : "); 
     scanf("%d", &F);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
       scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) { 
       arr[i] *= F ;
       printf("%d ", arr[i]);
     }
}

int main() {
FacteurArray();
return 0;
}

