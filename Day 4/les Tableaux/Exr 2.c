#include <stdio.h>

void InteractiveArray() {
int n  ;
   printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
       scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) { 
       printf("%d ", arr[i]);
     }
}

int main() {
InteractiveArray();
return 0;
}
