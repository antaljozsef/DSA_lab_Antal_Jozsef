#include <stdio.h>
#include "Function.h"

int main() {
    int xA, yA, xB, yB;
    printf("xA= ");
    scanf("%i", &xA);
    printf("yA= ");
    scanf("%i", &yA);
    printf("xB= ");
    scanf("%i", &xB);
    printf("yB= ");
    scanf("%i", &yB);

    int l;

    l = tavolsag(xA, yA, xB, yB);

    printf("A ket pont kozti tavolsag: %i", l);

    return 0;
}
