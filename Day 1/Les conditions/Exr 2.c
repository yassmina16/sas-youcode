#include <stdio.h>

void checkVoyelles(char c) {
  switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("voyelle\n");
  break;
  default:
    printf("Pas une voyelle\n");
  }
}

int main() {
checkVoyelles('a');
checkVoyelles('B');
return 0;
}