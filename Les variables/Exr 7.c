
#include <stdio.h>

void calculerMoyenne() {
    float num1, num2, num3; 
    float resultat;        
    printf("Entrez 1er nombre");
      scanf("%f", &num1);

    printf("Entrez 2ème nombre");
      scanf("%f", &num2);

    printf("Entrez 3ème nombre");
      scanf("%f", &num3);

    resultat = (num1 * 2 + num2 * 3 + num3 * 5) / 10.0;
    printf("%.2f\n", resultat);
}

int main() {
calculerMoyenne();
return 0;
}
