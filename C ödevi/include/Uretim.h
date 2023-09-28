#ifndef URETIM__H_
#define URETIM__H_

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

struct URETIM{
	
	int (*cevre)();
	void (*yoket)(struct URETIM*);
};
typedef struct URETIM* Uretim;

Uretim UretimOlustur();
void UretimYoket(const Uretim);

#endif
