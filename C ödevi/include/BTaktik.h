#ifndef BTAKTIK__H_
#define BTAKTIK__H_

#include "Taktik.h"

struct BTAKTIK
{
    Taktik super;
    int kenar;

    void (*yoket)(struct BTAKTIK *);
};
typedef struct BTAKTIK *BTaktik;

BTaktik BTaktikOlustur(int);
int btCevre(const BTaktik);
void BTaktikYoket(const BTaktik);
#endif
