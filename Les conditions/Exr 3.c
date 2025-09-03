#include <stdio.h>

void  Somme(int a, int b) {
  if (a == b) {
    printf("%d\n", (a + b) * 3);
  } else {
    printf("%d\n", a + b);
  }
}

int main() {
Somme(5, 10);
Somme(5, 5);
return 0;
}