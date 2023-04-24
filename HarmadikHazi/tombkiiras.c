#include <stdio.h>

void kiir(int tomb[], int meret)
{
    for (int i = 0; i < meret - 1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d", tomb[meret - 1]);
    printf("\n");
}

int main()
{
    int tomb[6] = {4, 5, 9, 46, 85, 30};
    int meret;
    meret = sizeof(tomb) / sizeof(int);
    kiir(tomb, meret);
    return 0;
}