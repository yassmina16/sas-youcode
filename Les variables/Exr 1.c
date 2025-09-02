#include <stdio.h>

void afficherInfos() {
char nom[50];
char prenom[50];
int age;
char sexe[50];
char email[50];
  printf("Entrez votre nom" );
    scanf("%s",&nom);
  printf("Entrez votre prénom"); 
    scanf("%s",&prenom);
  printf("Entrez votre age" ); 
    scanf("%d", &age);
  printf("Entrez votre sexe" );
    scanf("%s", &sexe);
  printf("Entrez votre email" );
    scanf("%s", &email);  
      printf("informations personnelles");
      printf("Nom: %s, Prénom: %s, Age: %d, Sexe: %s, Email: %s\n", nom, prenom, age, sexe, email);
}

int main() {
afficherInfos();
return 0;
}
