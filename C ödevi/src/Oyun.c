#include "Oyun.h"

void kullanici_girisi()
{
    say = 0;
    do
    {
        scanf("%i", &kull_gir[say++]);
    } while (getchar() != '\n' && say < 50);
}

void koloni_tablosu_olustur()
{
    koloniler_tablosu[say];
    for (int i = 0; i < say; i++)
    {
        koloniler_tablosu[i] = Koloni_Olustur(kull_gir[i]);
    }
}

void maclar()
{
    int x, y, z;
    for (int i = 0; i < say - 1; i++)
    {
        for (int j = i + 1; j < say; j++)
        {
            if (koloniler_tablosu[i].populasyon > 0 && koloniler_tablosu[i].uretim > 0 && koloniler_tablosu[j].populasyon > 0 && koloniler_tablosu[j].uretim > 0)
            {
                // x = rand() % 1000;
                // y = rand() % 1000;
                AKuv=ATaktikOlustur(koloniler_tablosu[i].uretim);
                x=AKuv->super->cevre(AKuv);
                BKuv=BTaktikOlustur(koloniler_tablosu[j].uretim);
                y=BKuv->super->cevre(BKuv);
                z = abs(x - y) / 10;
                if (x < y)
                {
                    koloniler_tablosu[j].uretim += koloniler_tablosu[i].uretim * z / 100;
                    // koloniler_tablosu[j].uretim += koloniler_tablosu[i].populasyon * z / 100;
                    koloniler_tablosu[j].kazanma += 1;
                    koloniler_tablosu[i].populasyon -= koloniler_tablosu[i].populasyon * z / 100;
                    koloniler_tablosu[i].uretim -= koloniler_tablosu[i].uretim * z / 100;
                    koloniler_tablosu[i].kaybetme -= -1;
                }
                if (x == y)
                {
                    if (koloniler_tablosu[i].populasyon < koloniler_tablosu[j].populasyon)
                    {
                        koloniler_tablosu[j].uretim += koloniler_tablosu[i].uretim * z / 100;
                        // koloniler_tablosu[j].uretim += koloniler_tablosu[i].populasyon * z / 100;
                        koloniler_tablosu[j].kazanma += 1;
                        koloniler_tablosu[i].populasyon -= koloniler_tablosu[i].populasyon * z / 100;
                        koloniler_tablosu[i].uretim -= koloniler_tablosu[i].uretim * z / 100;
                        koloniler_tablosu[i].kaybetme -= -1;
                    }
                    if (koloniler_tablosu[i].populasyon == koloniler_tablosu[j].populasyon)
                    {
                        int k = rand() % 1;
                        if (k == 1)
                        {
                            koloniler_tablosu[j].uretim += koloniler_tablosu[i].uretim * z / 100;
                            // koloniler_tablosu[j].uretim += koloniler_tablosu[i].populasyon * z / 100;
                            koloniler_tablosu[j].kazanma += 1;
                            koloniler_tablosu[i].populasyon -= koloniler_tablosu[i].populasyon * z / 100;
                            koloniler_tablosu[i].uretim -= koloniler_tablosu[i].uretim * z / 100;
                            koloniler_tablosu[i].kaybetme -= -1;
                        }
                        else
                        {
                            koloniler_tablosu[i].uretim += koloniler_tablosu[j].uretim * z / 100;
                            // koloniler_tablosu[i].uretim += koloniler_tablosu[j].populasyon * z / 100;
                            koloniler_tablosu[i].kazanma += 1;
                            koloniler_tablosu[j].populasyon -= koloniler_tablosu[j].populasyon * z / 100;
                            koloniler_tablosu[j].uretim -= koloniler_tablosu[j].uretim * z / 100;
                            koloniler_tablosu[j].kaybetme -= -1;
                        }
                    }
                    if (koloniler_tablosu[i].populasyon > koloniler_tablosu[j].populasyon)
                    {
                        koloniler_tablosu[i].uretim += koloniler_tablosu[j].uretim * z / 100;
                        // koloniler_tablosu[i].uretim += koloniler_tablosu[j].populasyon * z / 100;
                        koloniler_tablosu[i].kazanma += 1;
                        koloniler_tablosu[j].populasyon -= koloniler_tablosu[j].populasyon * z / 100;
                        koloniler_tablosu[j].uretim -= koloniler_tablosu[j].uretim * z / 100;
                        koloniler_tablosu[j].kaybetme -= -1;
                    }
                }
                if (x > y)
                {
                    koloniler_tablosu[i].uretim += koloniler_tablosu[j].uretim * z / 100;
                    // koloniler_tablosu[i].uretim += koloniler_tablosu[j].populasyon * z / 100;
                    koloniler_tablosu[i].kazanma += 1;
                    koloniler_tablosu[j].populasyon -= koloniler_tablosu[j].populasyon * z / 100;
                    koloniler_tablosu[j].uretim -= koloniler_tablosu[j].uretim * z / 100;
                    koloniler_tablosu[j].kaybetme -= -1;
                }
            }
        }
    }
}

void bir_tur_oyna()
{
    int r;
    for (int i = 0; i < say; i++)
    {
        if (koloniler_tablosu[i].populasyon > 0 && koloniler_tablosu[i].uretim > 0)
        {
            koloniler_tablosu[i].uretim -= koloniler_tablosu[i].populasyon * 2;
            koloniler_tablosu[i].populasyon += kull_gir[i] * 20 / 100;
            // koloniler_tablosu[i].populasyon += koloniler_tablosu[i].populasyon * 20 / 100;
            // koloniler_tablosu[i].uretim += rand() % 9 + 1;
            AYem = AUretimOlustur(koloniler_tablosu[i].populasyon);
            BYem = BUretimOlustur(koloniler_tablosu[i].populasyon);
            r = rand() % 1;
            if (r == 0)
                koloniler_tablosu[i].uretim += AYem->super->cevre(AYem);
            else
                koloniler_tablosu[i].uretim += BYem->super->cevre(BYem);
        }
    }
    maclar();
}

void printf_sonuc(int t)
{
    printf("------------------------------------------------------------\n");
    printf("TUR SAYISI: %i\n", t);
    printf("KOLONI    POPULASYON     YEMEK STOGU    KAZANMA   KAYBETME  \n");
    for (int i = 0; i < say; i++)
    {
        if (koloniler_tablosu[i].populasyon <= 0 || koloniler_tablosu[i].uretim <= 0)
            printf("  %c%15s %15s %10s %10s\n", koloniler_tablosu[i].bayrak, "--", "--", "--", "--");
        else
            printf("  %c%15i %15i %10i %10i\n", koloniler_tablosu[i].bayrak, koloniler_tablosu[i].populasyon, koloniler_tablosu[i].uretim, koloniler_tablosu[i].kazanma, koloniler_tablosu[i].kaybetme);
    }
}

void oyun_oynamak()
{
    kalan = say;
    tur = 0;
    while (kalan > 1)
    {
        printf_sonuc(tur);
        tur++;
        bir_tur_oyna();
        kalan = say;
        for (int i = 0; i < say; i++)
        {
            if (koloniler_tablosu[i].populasyon <= 0 || koloniler_tablosu[i].uretim <= 0)
                kalan--;
        }
        if (kalan <= 1)
        {
            printf_sonuc(tur);
            break;
        }
    }
}