#include <stdio.h>

void  tolower() {
char str[100];
    printf("Entrez la chaîne : ");
    scanf("%s", &str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] += 32;
        }
    }
    printf("%s\n", str);
}

int main() { 
tolower();
return 0;
}