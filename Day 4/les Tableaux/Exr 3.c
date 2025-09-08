#include <stdio.h>

void SommeArray() {
int n , result = 0 ;
   printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
        scanf("%d", &arr[i]);
        result += arr[i];
       printf("%d ", result);
     }
}

int main() {
SommeArray();
return 0;
}

