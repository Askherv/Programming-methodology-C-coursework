#include "AUretim.h"

AUretim AUretimOlustur(int yaricap)
{
    AUretim this;
    this = (AUretim)malloc(sizeof(struct AURETIM));
    this->super = UretimOlustur();
    this->yaricap = yaricap;
    this->super->cevre = &auCevre;
    this->yoket = &AUretimYoket;
    return this;
}
int auCevre(const AUretim this)
{
    return (int)(2 * 3.14 * this->yaricap + (rand() % 20)) % 9 + 1;
}
void AUretimYoket(const AUretim this)
{
    if (this == NULL)
        return;
    this->super->yoket(this->super);
    free(this);
}
