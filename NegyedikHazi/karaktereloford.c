#include <stdio.h>
#include <string.h>
#include "prog1.h"

int rfind_char(string s, char c)
{
    int lenght = strlen(s);
    for (int i = lenght; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "programozas";
    char c = 'a';
    int poz = rfind_char(s, c);
    printf("%d\n", poz);
}