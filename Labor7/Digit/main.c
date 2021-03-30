#include <stdio.h>
#include "functions.h"

int main() {

    int x,k,number;
    Digit *array;

    printf("number");
    scanf("%i",&number);

    Input(&array,number);

    do {
        printf("x=");
        scanf("%i",&x);

        switch (x) {
            case 1: Print(array);
                break;
            case 2:
                printf("k=");
                scanf("%i",&k);
                Digit_k(array,k);
                break;
            case 3: printf("%i ",SizeDigit(array));
                break;
            case 4:
                if (asc(array))
                {
                    Print(array);
                } else{
                    printf("The array isnt ascendion");
                }
                break;
            case 5:Destory(array);
                break;

        }
    } while (x!=0);

    return 0;
}
