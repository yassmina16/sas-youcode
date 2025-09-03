#include <stdio.h>

void Test(int n) {
  if (n % 2 == 0) {
    printf("Paire\n");
  } else {
    printf("Impaire\n");
  }
}
int main() {
Test(10);
Test(7);
return 0;
}