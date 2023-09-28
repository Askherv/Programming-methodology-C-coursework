#ifndef KOLONI__H_
#define KOLONI__H_

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

typedef struct Koloni
{
    int bayrak;
    int populasyon;
    int uretim;
    int kazanma;
    int kaybetme;
}Koloni;

Koloni Koloni_Olustur(int);

#endif