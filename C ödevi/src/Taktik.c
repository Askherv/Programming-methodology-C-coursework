#include "Taktik.h"

Taktik TaktikOlustur()
{
	Taktik this;
	this = (Taktik)malloc(sizeof(struct TAKTIK));
	this->yoket = &TaktikYoket;
	return this;
}

void TaktikYoket(const Taktik this)
{
	if (this == NULL)
		return;
	free(this);
}
