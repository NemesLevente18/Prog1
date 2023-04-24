#include <stdio.h>
#include <string.h>
#include "prog1.h"
#include <ctype.h>
#define MAX 1024
int main()
{
    printf("Adj meg jelszavakat a '*' vegjelig!\n");
    char jelszo[MAX];
    int kis = 0, nagy = 0, szam = 0, hosszu = 0;
    for (int i = 0; i < MAX; i++)
    {
        fgets(jelszo, MAX, stdin);
        if (jelszo[0] == '*')
        {
            break;
        }
        int h = strlen(jelszo);
        if (strlen(jelszo) >= 8)
        {
            hosszu++;
        }

        for (int i = 0; i < h; i++)
        {
            if (islower(jelszo[i]))
            {
                kis++;
            }
            else if (isupper(jelszo[i]))
            {
                nagy++;
            }
            else if (isdigit(jelszo[i]))
            {
                szam++;
            }
        }
        if (kis > 0 && nagy > 0 && szam > 0 && hosszu)
        {
            printf("Eros jelszo!\n");
        }
        else
        {
            printf("Gyenge jelszo\n");
        }
    }
}