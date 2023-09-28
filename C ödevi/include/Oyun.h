#ifndef OYUN__H_
#define OYUN__H_

#include "stdlib.h"
#include "stdio.h"
#include "Koloni.h"
#include "ATaktik.h"
#include "BTaktik.h"
#include "AUretim.h"
#include "BUretim.h"


Koloni koloniler_tablosu[200];
int say;
int tur;
int kalan;
int kull_gir[200];
ATaktik AKuv;
BTaktik BKuv;
AUretim AYem;
BUretim BYem;
void kullanici_girisi();
void koloni_tablosu_olustur();
void maclar();
void bir_tur_oyna();
void printf_sonuc(int);
void oyun_oynamak();

#endif