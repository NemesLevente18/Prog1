#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1024
int is_valid_c_identifier(char input[]);

int main()
{
    char tomb[MAX];
    do
    {
        printf("Adj meg sztringeket '*' vegjelig!\n");
        printf("input: ");
        scanf("%s", tomb);
        if (is_valid_c_identifier(tomb) == 1)
        {
            printf("YES\n");
            puts("");
        }
        else if (is_valid_c_identifier(tomb) == 0)
        {
            printf("NO\n");
            puts("");
        }

    } while (tomb[0] != '*');

    return 0;
}

int is_valid_c_identifier(char input[])
{
    int hossz = strlen(input);
    int hason = 0;
    if (hossz == 0)
    {
        return 0;
    }
    if (isupper(input[0]) || islower(input[0]) || input[0] == '_')
    {
        for (int j = 1; j < hossz; j++)
        {
            if (isalnum(input[j]) || input[j] == '_')
            {
                hason++;
            }
            if (isalnum(input[j]) == false && input[j] != '_')
            {
                return 0;
            }
        }
    }
    else if (isdigit(input[0]) || isalnum(input[0]) == false)
    {
        return 0;
    }
    if (input[0] != '_' && hason == hossz - 1)
    {
        return 1;
    }
}