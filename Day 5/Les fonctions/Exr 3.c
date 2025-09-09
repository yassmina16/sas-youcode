#include <stdio.h>

void Max() {
int num1 , num2 ;
    printf("Entrez un nembre:");
      scanf("%d", &num1);
    printf("Entrez un nembre:");
      scanf("%d", &num2);
  if (num1 > num2) {
     printf(" max :%d\n", num1);
  } else {
     printf(" max :%d\n", num2);
  }
}

int main() {
Max ();
return 0;
}
