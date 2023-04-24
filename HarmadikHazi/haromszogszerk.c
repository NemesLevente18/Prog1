#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    printf("Adja meg a haromszog oldalainak hosszat: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    bool eredm;
    eredm = valid_triangle(a, b, c);
    if (eredm == true)
    {
        printf("A haromszog megszerkeztheto.\n");
    }
    else
    {
        printf("A haromszog nem megszerkeztheto.\n");
    }
}