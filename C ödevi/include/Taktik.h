#ifndef TAKTIK__H_
#define TAKTIK__H_

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

struct TAKTIK{
	
	int (*cevre)();
	void (*yoket)(struct TAKTIK*);
};
typedef struct TAKTIK* Taktik;

Taktik TaktikOlustur();
void TaktikYoket(const Taktik);

#endif
