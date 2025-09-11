#include <stdio.h>
#include <string.h>

struct person {
    char nom[50];
    char prenom[50];
    int age;
};

void aff() {
    struct person p ;
    printf("Entrez votre nom :" );
    scanf("%s",&p.nom);
    printf("Entrez votre prenom :"); 
    scanf("%s",&p.prenom);
    printf("Entrez votre age :" ); 
    scanf("%d", &p.age);
      printf("informations personnelles :");
      printf("Nom: %s, Prenom: %s, Age: %d\n", p.nom, p.prenom,p.age);
}

int main() {
aff();
return 0;
}
