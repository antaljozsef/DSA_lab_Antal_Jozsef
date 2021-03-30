//
// Created by Antal József on 2021. 03. 30..
//

#ifndef DIGIT_FUNCTIONS_H
#define DIGIT_FUNCTIONS_H

#include <stdbool.h>

typedef struct {
    int vdig; //a szam szamjegye
    int cdig; //szamjegy elofordulasanak a szama
}Dig;

typedef struct Digit{
    int nrdigit;
    Dig *digits;

} Digit;

Digit* Create(int capacity);
void Destory(Digit *array);
void Input(Digit *array, int number);
int Digit_k(Digit *array, int k);
int SizeDigit(Digit *array);
void Print(Digit *array);
bool asc(Digit* array);
int init(Digit *array, int digit);

#endif //DIGIT_FUNCTIONS_H
