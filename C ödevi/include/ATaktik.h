#ifndef ATAKTIK__H_
#define ATAKTIK__H_

#include "Taktik.h"

struct ATAKTIK
{
    Taktik super;
    int yaricap;

    void (*yoket)(struct ATAKTIK *);
};
typedef struct ATAKTIK *ATaktik;

ATaktik ATaktikOlustur(int);
int atCevre(const ATaktik);
void ATaktikYoket(const ATaktik);
#endif
