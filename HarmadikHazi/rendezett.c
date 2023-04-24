#include <stdio.h>
#include <stdbool.h>

bool rendezett(int tomb[], int meret)
{
    if (meret == 0 || meret == 1)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < meret; i++)
        {
            if (tomb[i] < tomb[i + 1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    int tomb1[1] = {1};
    int tomb2[8] = {9, -4, 6, -13, 45, -78, 6, -5};
    int tomb3[6] = {-15, -5, 9, 13, 20, 70};
    int meret1, meret2, meret3;
    meret1 = sizeof(tomb1) / sizeof(int);
    meret2 = sizeof(tomb2) / sizeof(int);
    meret3 = sizeof(tomb3) / sizeof(int);
    bool eredm1, eredm2, eredm3;
    eredm1 = rendezett(tomb1, meret1);
    eredm2 = rendezett(tomb2, meret2);
    eredm3 = rendezett(tomb3, meret3);
    if (eredm1 == true)
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb nem rendezett.\n");
    }

    if (eredm2 == true)
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb nem rendezett.\n");
    }

    if (eredm3 == true)
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb nem rendezett.\n");
    }
}