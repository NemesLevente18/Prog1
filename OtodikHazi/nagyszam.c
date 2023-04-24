#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
#include <string.h>

int main()
{
    int a = 0;
    int b = -48;
    char tomb[MAX];
    printf("A szam: ");
    fgets(tomb, MAX, stdin);
    int meret = strlen(tomb);
    for (int i = 0; i < meret - 1; i++)
    {
        a = tomb[i] + a + b;
    }
    printf("A számjegyek összege: %d\n", a);
}
/*#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    string a[] = {"134078079299425970995740249982058461274793658205923933777235614437217640300735469768s01874298166903427690031858186486050853753882811946569946433649006084096"};
    int size = 157;
    int i = 0, ossz = 0;
    do
    {
        atoi(a[i]);
        ossz += a[i];
        i++;
    } while (i<size);
    printf("%d\n", ossz);
    return 0;
}*/