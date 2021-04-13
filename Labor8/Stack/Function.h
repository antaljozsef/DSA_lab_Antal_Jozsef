//
// Created by Antal József on 2021. 04. 13..
//

#ifndef STACK_FUNCTION_H
#define STACK_FUNCTION_H

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


#endif //STACK_FUNCTION_H
