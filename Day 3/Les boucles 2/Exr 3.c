#include <stdio.h>

void primes() {
int n , b , j;
    printf("Entrez un nembre:");
       scanf("%d" , &n);
    for(b = 2 ; b <= n ; b++){
    for(j = 2 ; j < b ; j++ )
       if(b % j == 0)
        break;
    if(b==j)
        printf("%d ",b);
    }
}
int main() {  
primes(); 
return 0; 
}
