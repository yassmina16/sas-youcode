#include <stdio.h>
#include <string.h>

struct person {
    char name[50];
    char fname[50];
    int age;
};

void aff() {
    struct person p ;
    char nom[50];
    char prenom[50];
    int age;
    printf("Entrez votre nom" );
    scanf("%s",&nom);
    strcpy(p.name , nom);
    printf("Entrez votre prénom"); 
    scanf("%s",&prenom);
    strcpy(p.fname , prenom);
    printf("Entrez votre age" ); 
    scanf("%d", &age);
    p.age = age;
      printf("informations personnelles");
      printf("Nom: %s, Prenom: %s, Age: %d\n", p.name, p.fname,p.age);
}

int main() {
aff();
return 0;
}
