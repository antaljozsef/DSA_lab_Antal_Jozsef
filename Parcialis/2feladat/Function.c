//
// Created by Antal József on 2021. 04. 20..
//

#include "Function.h"
#include <stdio.h>
#include <stdlib.h>

Stack *create(int capacity) { //Letrehozzuk a vermet
    Stack *stack = (Stack *) malloc(sizeof(Stack));

    if (!stack) {
        printf("Error while allocating stack!");
        return NULL;
    }

    stack->maxSize = capacity;
    stack->sp = -1;
    stack->items = (int *) malloc(stack->maxSize * sizeof(int));

    if (!stack->items) {
        printf("Error while allocating stack items!");
        return NULL;
    }

    return stack;
}

bool isEmpty(Stack *stack) { //Ellenorizzuk hogy urress-e
    return stack->sp == -1;
}

bool isFull(Stack *stack) { //Ellenorizzuk, hogy tele van-e
    return stack->sp == stack->maxSize - 1;
}


int top(Stack *stack) { //Vissza teritjuk a verem legfelso elemet
    return stack->items[stack->sp];
}

int pop(Stack *stack) { //Kivesszuk a verem legfelso elemet a verembol
    int n = top(stack);
    stack->sp--;
    return n;
}

void insert(Stack *stack, int n) { //Bele teszunk a verembe meg egy elemet
    stack->sp++;
    stack->items[stack->sp] = n;
}

void print(Stack* stack, FILE* fmaganhangzo, FILE* fmassalhangzo)
{
    Stack * tmp = stack;
    int maganh = 0, massalh = 0;

    while (tmp)
    {
        if (tmp->items)
        {
            fprintf(fmaganhangzo,"%i",stack->items);
            maganh++;
        } else{
            fprintf(fmassalhangzo,"%i",stack->items);
            massalh++;
        }
    }

}

void destory(Stack* stack) //Felszabaditjuk a vermet
{
    free(stack->items);
    free(stack);
}