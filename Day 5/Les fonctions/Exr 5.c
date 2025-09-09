#include <stdio.h>

long long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}
void factorielles(){
    int nbr;
    printf("entrez nomber positif: ");
    scanf("%d", &nbr);
    if (nbr < 0) {
        printf("nomber pas positif !! \n");
    } else {
        printf("le factorielle de %d est %lld .", nbr, factorielle(nbr));
    }
}

int main() {
    factorielles() ;
    return 0;
}