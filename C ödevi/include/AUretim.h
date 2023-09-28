#ifndef AURETIM__H_
#define AURETIM__H_

#include "Uretim.h"

struct AURETIM
{
    Uretim super;
    int yaricap;

    void (*yoket)(struct AURETIM *);
};
typedef struct AURETIM *AUretim;

AUretim AUretimOlustur(int);
int auCevre(const AUretim);
void AUretimYoket(const AUretim);
#endif
