#include <stdio.h>

void MaxArray() {
int n ;
  printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
       scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", max);
}

int main() {
MaxArray();
return 0;
}

