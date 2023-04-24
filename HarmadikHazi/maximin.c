#include <stdio.h>

int max(int tomb[], int meret)
{
    int maximum = 0;
    for (int i = 0; i < meret; i++)
    {
        if (i == 0)
        {
            maximum = tomb[i];
        }
        if (tomb[i] > maximum)
        {
            maximum = tomb[i];
        }
    }
    return maximum;
}

int min(int tomb[], int meret)
{
    int minimum = 0;
    for (int j = 0; j < meret; j++)
    {
        if (j == 0)
        {
            minimum = tomb[j];
        }
        if (tomb[j] < minimum)
        {
            minimum = tomb[j];
        }
    }
    return minimum;
}

int main()
{
    int tomb[9] = {7, -45, 99, 75, 5, -9, 52, -75, 740};
    int meret;
    meret = sizeof(tomb) / sizeof(int);
    int maxert;
    maxert = max(tomb, meret);
    int minert;
    minert = min(tomb, meret);
    printf("A legnagyobb elem: %d\n", maxert);
    printf("A legkisebb elem: %d\n", minert);
}