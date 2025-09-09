#include <stdio.h>

void len() {
int l = 0;
char texte [100];
    printf("Entrez une chaîne : ");
        gets(texte);
    while (texte[l] != '\0') {
    l++;
    }
    printf("%d\n", l);
}

int main() {
len();
return 0;
}
