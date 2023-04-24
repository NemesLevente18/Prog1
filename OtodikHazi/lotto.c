#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    printf("Hány db random számot kérsz?\n");
    int szam;
    scanf("%d", &szam);

    printf("Alsó határ: ");
    int lower;
    scanf("%d", &lower);

    printf("Felső határ: ");
    int upper;
    scanf("%d", &upper);
    printf("\n");
    srand(time(NULL));

    int number;
    int numbers[100];
    bool unique;
    printf("A generált számok: ");
    for (int i = 0; i < szam; i++)
    {
        do
        {
            number = rand() % (upper - lower + 1) + lower;

            unique = true;
            for (int j = 0; j < i; j++)
            {
                if (numbers[j] == number)
                {
                    unique = false;
                }
            }
        } while (!unique);

        numbers[i] = number;
        printf("%d ", number);
    }
    printf("\n");
    return 0;
}