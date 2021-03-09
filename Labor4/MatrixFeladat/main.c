#include <stdio.h>
#include "Functions.h"

int main() {
    Matrix *array;
    readMatrix("be.txt", &array);
    printMatrix(array);
    return 0;
}
