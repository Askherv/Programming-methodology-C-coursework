#ifndef BURETIM__H_
#define BURETIM__H_

#include "Uretim.h"

struct BURETIM
{
    Uretim super;
    int kenar;

    void (*yoket)(struct BURETIM *);
};
typedef struct BURETIM *BUretim;

BUretim BUretimOlustur(int);
int buCevre(const BUretim);
void BUretimYoket(const BUretim);
#endif
