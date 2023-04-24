#include <stdio.h>

int main()
{
    int sor, darab, space;
    printf("Adj meg egy paratlan szamot: ");
    while (1)
    {
        scanf("%d", &sor);
        if (sor < 0 || sor % 2 == 0)
        {
            printf("//HIBA//\n");
            break;
        }
        else
        {
            darab = 1;
            space = sor / 2;
            for (int i = 0; i < (sor + 1) / 2; i++)
            {
                for (int j = 0; j < space; j++)
                {
                    printf(" ");
                }
                space--;
                for (int k = 0; k < darab; k++)
                {
                    printf("*");
                }
                darab = darab + 2;
                printf("\n");
            }
            darab = sor - 2;
            space = 1;
            for (int i = 0; i < sor / 2; i++)
            {
                for (int j = 0; j < space; j++)
                {
                    printf(" ");
                }
                space++;
                for (int k = 0; k < darab; k++)
                {
                    printf("*");
                }
                darab = darab - 2;
                printf("\n");
            }
            return 0;
        }
    }
}