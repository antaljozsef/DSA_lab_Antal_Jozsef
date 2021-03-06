//
// Created by Antal József on 2021. 03. 02..
//

#ifndef INC_1FELADAT_FUNCTIONS_H
#define INC_1FELADAT_FUNCTIONS_H

typedef struct {
    char hschool[50];
    float average;
}KOZEPFOK;

typedef struct {
    char university[50];
    char department[50];
    float average;
}FELSOFOK;

typedef struct {
    char name[25];
    char education;
    KOZEPFOK kv;
    FELSOFOK ff;
}CEG;

//helyfoglalas
CEG* create(int n);

//hely_felszabaditas
//void destory(CEG* a,int n);

//adatok_beolvasasa
void read_data(CEG* a, int n, FILE *f);

//adatok kiiras
void write_data(CEG* a, int n);

#endif //INC_1FELADAT_FUNCTIONS_H