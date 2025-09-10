#include <stdio.h>
#include <string.h>

void Recher(){
char str[100];
char str2[100];

    printf("Entrez la chaîne 1 : ");
    fgets(str , sizeof(str) , stdin);
    printf("Entrez la chaîne 2 : ");
    fgets(str2 , sizeof(str2) , stdin);

    char *resultat = strstr(str , str2);
    if(resultat != NULL) {
    printf("not found");
    }else{
    printf("found");
    }
}

int main(){
Recher();
return 0;
}