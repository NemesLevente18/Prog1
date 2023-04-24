#include <stdio.h>
#include "prog1.h"
#include <string.h>

int match_ends(string szavak[], char szavak1[], int szavak_meret)
{
    int ossz = 0;
    char elso, utolso;
    int lepteto = 0;
    for (int i = 0; i < szavak_meret; i++)
    {
        int a = strlen(szavak[i]);
        if (a >= 2)
        {
            for (int j = lepteto; j <= lepteto + a - 1; j++)
            {
                if (j == lepteto)
                {
                    elso = szavak1[j];
                }
                if (j == lepteto + a - 1)
                {
                    utolso = szavak1[j];
                }
                if (elso == utolso)
                {
                    ossz++;
                }
            }
        }

        lepteto += a;
    }
    return ossz;
}

int main()
{
    string szavak[] = {"bab", "az", "abbab", "fel", "kek", "feher"};
    char szavak1[] = {"bab"
                      "az"
                      "abbab"
                      "fel"
                      "kek"
                      "feher"};
    int szavak_meret = 6;
    int b = match_ends(szavak, szavak1, szavak_meret);
    printf("Ennyi darab van: %d\n", b);
    return 0;
}