#include "BUretim.h"

BUretim BUretimOlustur(int kenar)
{
    BUretim this;
    this = (BUretim)malloc(sizeof(struct BURETIM));
    this->super = UretimOlustur();
    this->kenar = kenar;
    this->super->cevre = &buCevre;
    this->yoket = &BUretimYoket;
    return this;
}
int buCevre(const BUretim this)
{
    return (4 * this->kenar + (rand() % 40)) % 9 + 1;
}
void BUretimYoket(const BUretim this)
{
    if (this == NULL)
        return;
    this->super->yoket(this->super);
    free(this);
}
