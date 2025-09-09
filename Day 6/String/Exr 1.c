#include <stdio.h>

void afficher() {
char texte [100];
    printf("Entrez une chaîne : ");
        gets(texte);
    printf(" %s\n", texte);
}

int main() {
afficher();
return 0;
}
