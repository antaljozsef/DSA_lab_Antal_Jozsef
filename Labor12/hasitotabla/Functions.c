//
// Created by Antal József on 2021. 05. 18..
//

#include "Functions.h"
#include<stdio.h> //hasito tablazat
#include <stdlib.h>

int *create(int m) {
    int *table = (int*)malloc(m * sizeof(int));
    if (!table) {
        printf("Hiba!\n");
        return NULL;
    }
    for(int i=0; i<m; i++){
        table[i] = -1;
    }
    return table;
}

void beszur(int k, int *T, int m) // k kulcsu elemet beszur
{
    int j, i = 0;
    do {
        j = (k + i) % m;
        if (T[j] == -1) {
            T[j] = k;
            return;
        } else i++;
    } while (i != m);
    printf("Tulcsodulas!\n");
    return;
}

int keres(int k, int *T, int m) //k kulcsu elemet keres
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T[j]==k)
            return j;
        else i++;
    }
    while ((T[j]!=-1) && (i!=m));
    return -1;
}

void torol(int k, int *T, int m)
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T[j]==k)
        { T[j]=-1; break; }
        else i++;
    }
    while ((T[j]!=-1) && (i!=m));
    if (i!=m) printf("hianyzo elem");
}