#include <stdio.h>

void concat() {
char s1[100], s2[50];
    printf("Entrez deux mots : "); 
        scanf("%s %s", s1, s2);
    int i = 0, j = 0;
    while (s1[i] != '\0') {
    i++;
    }
    while ((s1[i++] = s2[j++]) != '\0');
    printf("Resultat: %s\n", s1);
}

int main() {
concat();
return 0;
} 