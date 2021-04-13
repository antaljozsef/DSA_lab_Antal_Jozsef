#include <stdio.h>
#include "Function.h"

int main() {

    STACK *myStack;
    myStack = create(20);

    int tmp = 0;

    for (int i = 1; i <= 20; ++i) {
        if (!isFull(myStack))
        {
            Push(myStack,tmp);
            tmp += 2;

        } else{
            printf("Nincs HElY");
        }
    }

    while (!isEmpty(myStack))
    {
        printf("%i ",Pop(myStack));
    }

    return 0;
}
