#include <stdio.h>
#include "Function.h"

int main() {
    int a, b, c;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);
    printf("c=");
    scanf("%i", &c);

    printf("A masodfoku egyenlet: %ix^2 + %ix + %i", a, b, c);

    egyenletMegoldas(a, b, c);

    return 0;
}
