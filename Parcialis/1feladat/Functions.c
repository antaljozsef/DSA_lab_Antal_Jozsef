//
// Created by Antal József on 2021. 04. 20..
//

#include "Functions.h"
#include <stdlib.h>
#include <stdio.h>

Node* create() {     // Letrehozza a listat
    Node* newNode = (Node*)calloc(1, sizeof(Node));

    if(!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->data = INT_MIN;
    newNode->next = NULL;

    return newNode;
}

void insert(Node** front, int data, int index) {
    Node *newNode = create();
    newNode->data = data;

    if (front == NULL || index == 0) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;
        int i = 1;

        while (p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}


void print(Node* front, FILE* fparos, FILE* fparatlan) {
    if(!front || !fparos || !fparatlan) {
        return;
    }

    if ((front->data)%2 == 0)  //Ha paros a front->data akkor az fparos txtbe fogja kiirni
    {
        fprintf(fparos," %i",front->data);
    } else{
        fprintf(fparatlan," %i",front->data); // Kulomben a paratlanba
    }

    print((Node *) front->next, fparos, fparatlan);
}

void destroy(Node* front) {
    if(front->next)
        destroy((Node *) front->next);

    free(front);    //Felszabaditjuk a listat
    front = NULL;
}
