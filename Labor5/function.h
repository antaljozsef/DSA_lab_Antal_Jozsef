//
// Created by Antal József on 2021. 03. 16..
//

#ifndef LABOR5_FUNCTION_H
#define LABOR5_FUNCTION_H

typedef struct{
    int maxsize;
    int sp;
    int *items
}STACK;

STACK * create(int capacity);
int isEmpty(STACK *myStack);
int isFull(STACK *myStack);

void Push(STACK *myStack,int a);
int Pop(STACK *myStack);
int Top(STACK *myStack);

#endif //LABOR5_FUNCTION_H
