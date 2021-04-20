#include <stdio.h>
#include "Functions.h"


int main() {

    Node *l = NULL;

    int n;
    printf("n=");
    scanf("%i",&n);


    while (n > 0)
    {
        insert(&l,n%10,0);
        n/=10;
    }

    FILE * fparos = fopen("Paros.txt","w");
    if (!fparos)
    {
        printf("Error");
        return 0;
    }

    FILE * fparatlan = fopen("Paratlan.txt","w");
    if (!fparatlan)
    {
        printf("Error");
        return 0;
    }

    print(l,fparos,fparatlan);

    return 0;
}