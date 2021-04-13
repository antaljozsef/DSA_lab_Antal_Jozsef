//
// Created by Antal József on 2021. 04. 13..
//

#include "Function.h"
#include <stdlib.h>
#include <stdio.h>

Tomb *Letrehozas(int meret) {
    Tomb *tomb = (Tomb *) malloc(sizeof(Tomb));

    if (tomb == NULL) {
        printf("Error");
        return 0;
    }

    tomb->meret = meret;
    tomb->szamok = (int *) malloc(tomb->meret * sizeof(int));

    if (tomb == NULL) {
        printf("Error");
        free(tomb);
        return 0;
    }

    return tomb;
}

void Feltoltes(Tomb** tomb) {
    Tomb *tomb1 = Letrehozas(20);

    int tmp = 0;
    for (int i = 0; i < tomb1->meret; ++i) {
        tomb1->szamok[i] = tmp;
        tmp += 2;
    }

    *tomb = tomb1;
}

void Kiiras(Tomb* tomb) {

    printf("A tomb: ");

    for (int i = 0; i < tomb->meret; ++i) {
        printf("%i ", tomb->szamok[i]);
    }
}