#include<stdio.h>
#include<string.h>

void rev(){
char arr[50];
    
    printf("entrer la chaine : ");
    fgets(arr , sizeof(arr) , stdin);
    int len = strlen(arr);
    for (int i = len-1 ; i >=0 ; i--){

        printf("%c",arr[i]);

        }   
    }
 
int main(){
    rev();
    return 0;
}
