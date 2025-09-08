#include <stdio.h>

void MinArray() {
int n ;
  printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
       scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d\n", min);
}

int main() {
MinArray();  
return 0;
}
 