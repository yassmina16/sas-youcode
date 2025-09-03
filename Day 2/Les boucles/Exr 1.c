#include <stdio.h>

void TableMult() {
  int n , i;
  printf("Entrez un nembre");
      scanf("%d", &n);
    for (i = 1 ; i <= 10; i++) {
    printf("%d * %d = %d\n",n,i, n*i );
    }
}
int main() {
TableMult();
return 0;
}