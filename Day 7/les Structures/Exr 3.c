#include <stdio.h>

struct Rect {
    int r, g;
};

void area() {
    struct Rect R ;
    printf("Entrez largeur :" );
        scanf("%d",&R.r);
    printf("Entrez longeur :" );
        scanf("%d",&R.g);
    printf("Area: %d\n", R.r * R.g);
}

int main() {
area();   
return 0; 
}
