#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1 || argc == 0)
    {
        printf("Nem adtál meg egy szót sem");
    }
    int min = strlen(argv[1]);
    for (int i = 1; i < argc; i++)
    {

        if (strlen(argv[i]) < min)
        {
            min = strlen(argv[i]);
        }
    }

    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) == min)
        {
            printf("%s \n", argv[i]);
        }
    }
}