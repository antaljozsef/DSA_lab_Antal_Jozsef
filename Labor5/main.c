#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {

    STACK *myStack;
    myStack = create(10);

    for (int i = 1; i <= 10; ++i) {
        if (!isFull(myStack))
        {
            Push(myStack,i);
        } else{
            printf("Nincs HElY");
        }
    }

    while (!isEmpty(myStack))
    {
        printf("%i",Pop(myStack));
    }
    return 0;
}
