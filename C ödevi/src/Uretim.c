#include "Uretim.h"

Uretim UretimOlustur()
{
	Uretim this;
	this = (Uretim)malloc(sizeof(struct URETIM));
	this->yoket = &UretimYoket;
	return this;
}

void UretimYoket(const Uretim this)
{
	if (this == NULL)
		return;
	free(this);
}
