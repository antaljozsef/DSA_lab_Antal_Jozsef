//
// Created by Antal József on 2021. 03. 16..
//

#include <stdlib.h>
#include <stdio.h>
#include "Tomb_functions.h"

void create(int n) {
    int *a = (int *) malloc(sizeof(int));

    if (!a) {
        printf("Hiba a helyfoglalas kozben!");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        a[i] = (int *) malloc(n * sizeof(int));
    }

    return a;
}

void read(const char *fileName, int **a) {

    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba az allomany megniytasakor!");
        return;
    }

    int n;
    fscanf(fin, "%i", &n);

    *a = create(n);

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%i", &a[i]);
    }
}

void print(int *a, int n) {

    printf("A matrix: \n");
    for (int i = 0; i < n; i++) {

        printf("%i ", a[i]);
    }
    printf("\n");
}

void OASZ(int *a, int n) {
    int osszeg = 0, szorzat = 1;
    for (int i = 0; i < n; ++i) {
        osszeg += a[i];
        szorzat *= a[i];
    }

    printf("Osszeg: %i\n", osszeg);
    printf("Atlag: %f\n", (float) osszeg / n);
    printf("Szorzat: %i\n", szorzat);
}

int Prime(int *a, int n) {
    int flag = 0, osszeg;

    for (int i = 0; i < n; ++i) {

        for (int j = 2; j <= n / 2; ++i) {
            if (a[i] % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            osszeg += a[i];
        }

    }

    return osszeg;
}

void Number_PN(int *a, int n)
{
    int pdb = 0, ndb = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>=0){
            pdb++;
        } else{
            ndb++;
        }
    }

    printf("Pozitiv: %i\n",pdb);
    printf("Negativ: %i\n",ndb);
}