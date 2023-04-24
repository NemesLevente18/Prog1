#include <stdio.h>
#include <math.h>

void pozit(int tomb[], int meret)
{
    for (int j = 0; j < meret; j++)
    {
        if (tomb[j] < 0)
        {
            tomb[j] = tomb[j] * (-1);
        }
        printf("%d, ", tomb[j]);   
    }
    printf("\n");
}

int main()
{
    int tomb[7] = {-7, 8, -56, -85, 9, 6, -77};
    int meret;
    meret = sizeof(tomb) / sizeof(int);
    for (int i = 0; i < meret - 1; i++)
    {
        printf("%d, ", tomb[i]);
    }
    printf("%d\n", tomb[meret - 1]);
    pozit(tomb, meret);
}