#include "ATaktik.h"

ATaktik ATaktikOlustur(int yaricap)
{
    ATaktik this;
    this = (ATaktik)malloc(sizeof(struct ATAKTIK));
    this->super = TaktikOlustur();
    this->yaricap = yaricap;
    this->super->cevre = &atCevre;
    this->yoket = &ATaktikYoket;
    return this;
}
int atCevre(const ATaktik this)
{
    return (int)(2 * 3.14 * this->yaricap + (rand() % 20)) % 1000;
}
void ATaktikYoket(const ATaktik this)
{
    if (this == NULL)
        return;
    this->super->yoket(this->super);
    free(this);
}
