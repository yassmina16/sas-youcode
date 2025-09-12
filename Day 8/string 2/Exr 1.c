#include <stdio.h>
#include<string.h>

void toupper() {
char str[100];
    printf("Entrez la chaîne : ");
    fgets(str , sizeof(str) , stdin);
    strlwr (str) ;
    printf("%s\n", str);
}

int main() {
toupper();
return 0;
}
