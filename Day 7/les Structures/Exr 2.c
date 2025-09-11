#include <stdio.h>

struct person {
    char nom[50];
    char prenom[50];
    float note1[4];

};

void affi() {
    struct person p ;
    printf("Entrez votre nom :" );
    scanf("%s" , &p.nom);
    printf("Entrez votre prenom :"); 
    scanf("%s" , &p.prenom);
    for(int i = 0 ; i < 4 ; i++) {
        printf("Entrez votre note1 :%d", i + 1 ); 
        scanf("%f", &p.note1[i]);
    }
    printf("informations personnelles :");
    printf("\n Nom: %s\n Prenom: %s\n " , p.nom, p.prenom );
    for(int i = 0 ; i < 4 ; i++){
        printf("%.2f\n" , p.note1[i]);
    }
}

int main() {
affi();
return 0;
}