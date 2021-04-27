#include <stdio.h>
#include "Function.h"

int main() {
    root *tree;
    tree = create(0);
    tree = NULL;
    FILE *f = fopen("be.txt","r");

    //állománykezelés
    int x;
    while(fscanf(f,"%d", &x)!=EOF)
    {
        insert(&tree, x);
    }

    printf("Inorder: ");
    inorder(tree);

    return 0;
}
