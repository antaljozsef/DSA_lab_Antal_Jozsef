#include <stdio.h>
#include "Function.h"

int main() {

    char s[11];
    printf("Adj meg egy szavat");
    scanf("%c",s);

    Stack *stack = create(10);


    FILE * fmaganhangzok = fopen("Maganhangzo.txt","w");
    if (!fmaganhangzok)
    {
        printf("Error");
        return 0;
    }

    FILE * fmassalhangzo = fopen("Massalhangzo.txt","w");
    if (!fmassalhangzo)
    {
        printf("Error");
        return 0;
    }

    destory(stack);

    return 0;
}
