#include <stdio.h>

int main()
{
    printf("Add meg a haromszogek magassagat: ");
    int height = 0;
    char c = '*';
    scanf("%d", &height);
    for (int k = 1; k <= height; k++)
    {
        for (int f = 0; f < height - k; f++)
        {
            printf(" ");
        }
        for (int h = 0; h < k * 2; h++)
        {
            if (h == k)
            {
                printf("  ");
            }
            printf("%c", c);
        }
        printf("\n");
    }
}