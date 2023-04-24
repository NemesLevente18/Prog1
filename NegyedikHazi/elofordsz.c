#include <stdio.h>
#include <string.h>
#include "prog1.h"

int char_count(string s, char c)
{
    int szamlalo = 0;
    int hossz = strlen(s);
    for (int i = 0; i < hossz; i++)
    {
        if (s[i] == c)
        {
            szamlalo++;
        }
    }
    return szamlalo;
}

int main()
{
    string s = "programozas";
    char c = 'x';
    int db = char_count(s, c);
    printf("A betu elofordulasainak szama: %d\n", db);
}