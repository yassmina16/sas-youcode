#include <stdio.h>

void afficher() {
char texte [100];
    printf("Entrez une chaîne : ");
        fgets(texte ,sizeof(texte) ,stdin);
    printf(" %s\n", texte);
}

int main() {
afficher();
return 0;
}
