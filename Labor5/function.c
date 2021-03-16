//
// Created by Antal József on 2021. 03. 16..
//

#include <stdlib.h>
#include <stdio.h>
#include "function.h"

STACK * create(int capacity){
    STACK *myStack = (STACK*)malloc(sizeof (STACK));

    if (!myStack){
        printf("ERROR");
        return 0;
    }
    myStack->sp=1;
    myStack->items = (int*)malloc(myStack->maxsize*sizeof (int));

    if (!myStack->maxsize){
        printf("ERROR");
        return 0;
    }

    return myStack;
}

int isEmpty(STACK *myStack)
{
    return myStack->sp == -1;
}

int isFull(STACK *myStack)
{
    return myStack -> sp == myStack -> maxsize -1;
}

void Push(STACK *myStack, int a)
{
    myStack->sp+1;
    myStack->items[myStack->sp]=a;
}

int Pop(STACK *myStack)
{
    int a;
    a = myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}

int Top(STACK *myStack)
{
    int a;
    a = myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}