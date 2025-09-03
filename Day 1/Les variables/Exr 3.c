#include <stdio.h>

void KmAYards(double km) {
    double yards = km * 1093.61;
      printf("%.2f\n", yards);
}

int main() {
KmAYards(10.0);
return 0;
}
