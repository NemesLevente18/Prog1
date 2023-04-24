#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int min;
    int max;
    double average;
} Tomb_elemei;

int random_szam(int lower, int upper);
Tomb_elemei elemzo(int array[], int size);

int main(void)
{
    srand(time(NULL));

    int size = 10;
    int tomb[size];
    tomb[0] = random_szam(10, 99);
    printf("A tomb elemei: %d", tomb[0]);

    for (int i = 1; i < size; i++)
    {
        tomb[i] = random_szam(10, 99);
        printf(", %d", tomb[i]);
    }
    printf("\n");

    Tomb_elemei vegso_tomb = elemzo(tomb, size);

    printf("Legkisebb elem: %d\n", vegso_tomb.min);
    printf("Legnagyobb elem: %d\n", vegso_tomb.max);
    printf("Az elemek atlaga: %.1lf\n", vegso_tomb.average);

    return EXIT_SUCCESS;
}

int random_szam(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

Tomb_elemei elemzo(int array[], int size)
{
    Tomb_elemei tmp_array;
    tmp_array.average = array[0];
    tmp_array.min = array[0];
    tmp_array.max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < tmp_array.min)
        {
            tmp_array.min = array[i];
        }
        if (array[i] > tmp_array.max)
        {
            tmp_array.max = array[i];
        }
        tmp_array.average += array[i];
    }
    tmp_array.average /= size;

    return tmp_array;
}
