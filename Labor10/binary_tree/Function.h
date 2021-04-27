//
// Created by Antal József on 2021. 04. 27..
//

#ifndef BINARY_TREE_FUNCTION_H
#define BINARY_TREE_FUNCTION_H

typedef struct root
{
    int adat;
    struct root *bal;
    struct root *jobb;
}root;

root *create(int);
void insert(root **, int);
void inorder(root *);

#endif //BINARY_TREE_FUNCTION_H
