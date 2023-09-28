#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "Oyun.h"

int main()
{
    srand(time(0));
    kullanici_girisi();
    koloni_tablosu_olustur();
    oyun_oynamak();
    printf("------------------------------------------------------------\n");
    system("pause");
    return 0;
}
