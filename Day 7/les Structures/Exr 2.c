#include <stdio.h>

struct person {
    char nom[50];
    char prenom[50];
    float note;
};

void affi() {
    struct person p ;
    printf("Entrez votre nom :" );
    scanf("%s",&p.nom);
    printf("Entrez votre prenom :"); 
    scanf("%s",&p.prenom);
    printf("Entrez votre note :" ); 
    scanf("%f", &p.note);
      printf("informations personnelles :");
      printf("\n Nom: %s\n  Prenom: %s\n  note: %.2f\n", p.nom, p.prenom,p.note);
}

int main() {
affi();
return 0;
}