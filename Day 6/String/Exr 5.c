#include <stdio.h>

void inverser() {
    char str[100];
    printf("Entrez la chaîne : ");
    scanf("%s", &str);
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s\n", str);
}

int main() {
inverser();
return 0;
}
