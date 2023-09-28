#include "BTaktik.h"

BTaktik BTaktikOlustur(int kenar)
{
    BTaktik this;
    this = (BTaktik)malloc(sizeof(struct BTAKTIK));
    this->super = TaktikOlustur();
    this->kenar = kenar;
    this->super->cevre = &btCevre;
    this->yoket = &BTaktikYoket;
    return this;
}
int btCevre(const BTaktik this)
{
    return (4 * this->kenar + (rand() % 40)) % 1000;
}
void BTaktikYoket(const BTaktik this)
{
    if (this == NULL)
        return;
    this->super->yoket(this->super);
    free(this);
}
