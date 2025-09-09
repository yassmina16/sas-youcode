#include <stdio.h>

void  RevArray() {
int n ;
   printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les elements %d : ", i + 1); 
       scanf("%d", &arr[i]);
    }
     for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
       if (i > 0) 
        printf(", ");
    }
    printf("\n");
}

int main() { 
RevArray();  
return 0;
}
