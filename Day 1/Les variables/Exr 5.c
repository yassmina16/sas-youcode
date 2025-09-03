#include <stdio.h>

void EtatEau(int temperature) {
  if (temperature < 0) {
    printf("L'eau est un Solide \n");
  } else if (temperature >= 100) {
    printf("L'eau est un Gaz \n");
  } else {
    printf("L'eau est un Liquide \n");
  }
}

int main() {
EtatEau(-5);
EtatEau(100);
EtatEau(10);
return 0;
}