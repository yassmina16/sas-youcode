#include<stdio.h>

void Sprm() {
    char str[100];
    int n = 0;
    char result[100]; 
    printf("Entrez la chaîne : ");
    fgets(str , sizeof(str) , stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '!'  && str[i] !=  '.' && str[i] != '?' && str[i] != ':' && str[i] != ';'  && str[i] != ',' ) {
        result[n++] = str[i] ;
        }
    }
    result [n] = '\0';
    printf("%s\n", result);
}

int main() { 
Sprm();
return 0;
}

