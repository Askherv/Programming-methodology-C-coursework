#include "Koloni.h"

Koloni Koloni_Olustur(int s)
{
    Koloni k;
    k.bayrak = rand() % 100 + 33;
    k.populasyon = s;
    k.uretim = pow(s, 2);
    k.kazanma = 0;
    k.kaybetme = 0;

    return k;
}