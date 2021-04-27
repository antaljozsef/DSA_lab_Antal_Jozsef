//
// Created by Antal József on 2021. 04. 27..
//

#include "Function.h"
#include <stdio.h>
#include <stdlib.h>

root *create(int a)
{
    root *ag;
    ag = (root *)(malloc(sizeof(root)));
    if(!ag)
    {
        printf("Sikertelen lefoglalas");
        return 0;
    }
    ag->adat = a;
    ag->jobb = NULL;
    ag->bal = NULL;
    return ag;
}

void insert(root **fa, int a)
{
    if((*fa) == NULL)
    {
        (*fa) = create(a);
    }
    else
    {
        if((*fa)->adat > a)
            insert(&((*fa)->bal),a);
        else insert(&((*fa)->jobb),a);
    }
}

void inorder(root *fa)
{
    if(fa->bal)
        inorder(fa->bal);
    printf("%3d ", fa->adat);
    if(fa->jobb)
        inorder(fa->jobb);
}