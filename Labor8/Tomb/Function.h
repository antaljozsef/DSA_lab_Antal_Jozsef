//
// Created by Antal József on 2021. 04. 13..
//

#ifndef TOMB_FUNCTION_H
#define TOMB_FUNCTION_H

typedef struct {
    int meret;
    int* szamok
}Tomb;

Tomb* Letrehozas(int meret);
void Feltoltes(Tomb** tomb);
void Kiiras(Tomb* tomb);


#endif //TOMB_FUNCTION_H
