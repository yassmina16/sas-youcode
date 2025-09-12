#include<stdio.h>
#include<string.h>

void count() {
char str[100];
int count = 0;
    printf("Entrez la chaîne : ");
    fgets(str , sizeof(str) , stdin);
     char *word = strtok(str, " " );
    while(word != NULL){
        count ++ ;
        word = strtok(NULL , " ");
    }
    printf("%d" , count);
}

int main(){
count();
return 0;
}



