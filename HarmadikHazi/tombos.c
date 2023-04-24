#include <stdio.h>
#include <stdlib.h>

int felhokarc(char szam[], int meret)
{
    int j, kul;
    int eredm = 0;
    for (int i = 0; i < meret - 2; i++)
    {
        j = i + 1;
        kul = abs(szam[j] - szam[i]);
        eredm = eredm + kul;
    }
    return eredm;
}

int main()
{
    char szam[] = "17976931348623159077293051907890247336179769789423065727343008115577326758055009631327084"
                  "7732240753602112011387987139335765878976881441662249284743063947412437776789342486548527630221960124609"
                  "4119453082952085005768838150682342462881473913110540827237163350510684586298239947245938479716304835356329624224137216";
    int meret = sizeof(szam);
    int eredmeny;
    eredmeny = felhokarc(szam, meret);
    printf("%d\n", eredmeny);
    return 0;
}