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
    printf("est une voyelle.\n");
  break;
  default:
    printf("n'est pas une voyelle.\n");
  }
}

int main() {
checkVoyelles('a');
return 0;
}