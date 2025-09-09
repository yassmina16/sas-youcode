
#include <stdio.h>

void count() {
char str[100]; 
char c ;
int Result = 0;
    printf("Entrez la chaîne : ");
    scanf("%s", &str);
    printf("Entrez la chaîne : ");
    scanf(" %c", &c);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
        Result++;
        }
    }
    printf(" %d", Result);
}

int main() {
count();
return 0;
}