//
// Created by Antal József on 2021. 04. 20..
//

#ifndef INC_2FELADAT_FUNCTION_H
#define INC_2FELADAT_FUNCTION_H

#include <stdbool.h>

typedef struct {
    int maxSize;
    int sp;
    int *items;
} Stack;

Stack *create(int capacity);

bool isEmpty(Stack *stack);

bool isFull(Stack *stack);

int pop(Stack *stack);

int top(Stack *stack);

void insert(Stack *stack, int n);

void destory(Stack* stack);

#endif //INC_2FELADAT_FUNCTION_H
