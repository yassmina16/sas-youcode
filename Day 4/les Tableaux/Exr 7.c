#include <stdio.h>

void OrdreArray() {
int n ;
  printf("Entrez le nembre (maximum 100) : "); 
     scanf("%d", &n);
   int arr[n];  
    for (int i = 0; i < n; i++) { 
      printf("Entrez les éléments:%d", i + 1); 
       scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {   
        for(int j = 0 ; j < n - 1 ; j++){ 
            if (arr[j+1] < arr[j]) {
                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for(int i = 0 ; i < n ; i++){
        printf("%d\n" , arr[i]);
    }
}

int main() {
OrdreArray();  
return 0;
}