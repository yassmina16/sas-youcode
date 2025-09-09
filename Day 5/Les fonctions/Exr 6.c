#include <stdio.h>

long long fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

void fibonacci(){
    int nbr;
    printf("entrez nomber positif: ");
    scanf("%d", &nbr);
    if (nbr < 0) {
        printf("nomber pas positif !! \n");
    } else {
        printf("le fibonacci de %d est %lld .", nbr, fibo(nbr));
    }
}

int main() {
fibonacci() ;
return 0;
}