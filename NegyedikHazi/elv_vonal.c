#include <stdio.h>
#include <string.h>

void line(char c, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main()
{   
    printf("Adjon meg az elvalaszto vonal hosszat: ");
    int lenght;
    char c;
    c = '-';
    scanf("%d", &lenght);
    printf("Hello\n");
    line(c, lenght);
    printf("World\n");
    return 0;
}