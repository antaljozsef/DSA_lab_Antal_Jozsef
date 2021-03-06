//
// Created by Antal József on 2021. 03. 02..
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

CEG *create(int n) {
    CEG *a = (CEG *) malloc(n * sizeof(int));
    return a;
}

void read_data(CEG *a, int n, FILE *fp) {
    for (int i = 0; i < n; ++i) {
        fscanf(fp, "%s", a[i].name);
        fscanf(fp, "%c", &a[i].education);

        if (a[i].education == 'N') {
            continue;
        } else if (a[i].education == 'K') {
            fscanf(fp, "%s", a[i].kv.hschool);
            fscanf(fp, "%f", &a[i].kv.average);
        } else if (a[i].education == 'F') {
            fscanf(fp, "%s", a[i].ff.university);
            fscanf(fp, "%s", a[i].ff.department);
            fscanf(fp, "%f", &a[i].ff.average);
        }
    }
}

void write_data(CEG *a, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%i. worker name: %s", i + 1, a[i].name);

        if (a[i].education == 'N') {
            printf("\nThe worker doesn't have education!");
        } else if (a[i].education == 'K') {
            printf("\nHigh school: %s", a[i].kv.hschool);
            printf("\nAverage: %f", a[i].kv.average);
        } else if (a[i].education == 'F') {
            printf("\nUniversity: %s", a[i].ff.university);
            printf("\nDepartment: %s", a[i].ff.department);
            printf("\nAverage: %f", a[i].ff.average);
        } else
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    }
}