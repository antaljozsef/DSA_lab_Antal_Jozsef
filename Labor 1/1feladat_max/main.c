#include <stdio.h>
#include "MAX_MIN.h"

int main() {
    int a,b,c;
    printf("a=");
    scanf("%i",&a);

    printf("b=");
    scanf("%i",&b);

    printf("c=");
    scanf("%i",&c);

    int maxSzam = maxN(a,b,c);
    int minSzam = minN(a,b,c);

    printf("\nA legnagyobb szam: %i",maxSzam);
    printf("\nA legkissebb szam: %i",minSzam);

    return 0;
}
