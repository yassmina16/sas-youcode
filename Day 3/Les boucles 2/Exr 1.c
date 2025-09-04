#include <stdio.h>

void TableMultrev() {
  int n , i ;
  printf("Entrez un nembre");
      scanf("%d", &n);
    for (i = 10 ; i >= 1; i--) {
    printf("%d * %d = %d\n",n,i, n*i );
    }
}
int main() {
TableMultrev(); 
return 0;
}