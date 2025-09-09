#include <stdio.h>

void Fibonacci() {
int n ; 
int a = 0 , b = 1;
int next = 0;
  printf("Entrez un nembre:");
  scanf("%d", &n);
  for (int i = 1 ; i <= n; i++) {
      printf("%d ", a);
      next = a + b ;
      a = b ; 
      b = next;
  }
}

int main() { 
Fibonacci(); 
return 0;
}
