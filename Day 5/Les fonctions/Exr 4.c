#include <stdio.h>

void Min() {
int num1 , num2 ;
    printf("Entrez un nembre:");
      scanf("%d", &num1);
    printf("Entrez un nembre:");
      scanf("%d", &num2);
  if (num1 < num2) {
     printf(" Min :%d\n", num1);
  } else {
     printf(" Min :%d\n", num2);
  }
}

int main() {
Min();
return 0;
}
