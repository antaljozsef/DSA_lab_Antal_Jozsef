//
// Created by Antal József on 2021. 03. 09..
//

#ifndef MATRIXFELADAT_FUNCTIONS_H
#define MATRIXFELADAT_FUNCTIONS_H

typedef struct {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
} Matrix;

Matrix *createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix *array);

#endif //MATRIXFELADAT_FUNCTIONS_H
