#include <stdio.h>

void  CopieArray() {
int n ;
   printf("Entrez le nembre (maximum 100) :  \n"); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les elements %d : ", i + 1); 
       scanf("%d", &arr[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n") ;
    for (int i = 0 ; i < n ; i++) { 
        b[i] = arr[i]; 
        printf("%d ", b[i]); 
    }

}

int main() { 
CopieArray();  
return 0;
}
