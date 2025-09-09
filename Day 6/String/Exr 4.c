#include <stdio.h>

void strcmp() {
int i = 0;
char s1[100], s2[50];
    printf("Entrez le mots 1 : "); 
        scanf("%s", &s1 );
    printf("Entrez le mots 2 : "); 
        scanf("%s", &s2 );
    while (s1[i] && s1[i] == s2[i]) {
    i++;
    } if (s1[i] == s2[i]) { 
        printf("Les chaînes sont égales.\n");
    } else { 
        printf("Les chaînes sont différentes.\n");
    }
}

int main() {
strcmp();
return 0;
}