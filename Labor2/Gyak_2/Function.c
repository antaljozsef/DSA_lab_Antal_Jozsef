//
// Created by Antal József on 2021. 03. 01..
//

#include <math.h>
#include "Function.h"


int tavolsag(int xA, int yA, int xB, int yB)
{
    int l;
    l = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));

    return l;
}
