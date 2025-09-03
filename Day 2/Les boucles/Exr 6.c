
#include <stdio.h>

void Npairs() {
    int n ;
    printf("Entrez un nembre");
    scanf("%d", &n);
  for (int i = 1; i <= n; i++) { 
    printf("%d ",2* i); 
  } 
}

int main () {
Npairs();
return 0;
} 