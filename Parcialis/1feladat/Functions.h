//
// Created by Antal József on 2021. 04. 20..
//

#ifndef INC_1FELADAT_FUNCTIONS_H
#define INC_1FELADAT_FUNCTIONS_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    int data;
    struct Node* next;
} Node;

Node* create();

void insert(Node** front, int data, int index);
void print(Node* front, FILE* fparos, FILE* fparatlan);
void destroy(Node* front);

#endif //INC_1FELADAT_FUNCTIONS_H
