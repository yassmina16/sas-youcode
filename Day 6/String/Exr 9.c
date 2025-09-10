#include <stdio.h>
#include <string.h>

void  spaces() {
char str[100];
int n = 0 ;
    printf("Entrez la chaîne : ");
    fgets(str , sizeof(str) , stdin);
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] != ' '){
            str[n++] = str[i];
        }
    }
    printf("%s" , str);
}

int main(){
spaces();
return 0;
}