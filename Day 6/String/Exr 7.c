#include <stdio.h>

void toupper() {
char str[100];
    printf("Entrez la chaîne : ");
    scanf("%s", &str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] -= 32;
        
        }
    }
    printf("%s\n", str);
}

int main() {
toupper();
return 0;
}