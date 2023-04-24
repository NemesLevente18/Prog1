#include <stdio.h>
#include <string.h>
int main()
{
    printf("Adj meg ket szamot es egy muveletet (space-el elvalasztva): ");
    float a;
    float b;
    int w = a;
    int f = b;
    char s;
    scanf("%f %f %c", &a, &b, &s);  
    int osszeg, szorzas, kivonas, maradekos;
    float osztas;
    osszeg = a + b;
    szorzas = a * b;
    kivonas = a - b;
    osztas = a / b;
    maradekos = w % f;
    if (s == '+')
    {
        printf("Az osszeg eredmenye: %d\n", osszeg);
    }
    else if (s == '*')
    {
        printf("A szorzat eredmenye: %d\n", szorzas);
    }
    else if (s == '-')
    {
        printf("A kivonas eredmenye: %d\n", kivonas);
    }
    else if (s == '/')
    {
        printf("Az osztas eredmenye: %f\n", osztas);
    }
    else if (s == '%')
    {
        printf("A maradekos osztas eredmenye: %d\n", maradekos);
    }
}
/*{
    printf("Adj meg ket egesz szamot: ");
    int c;
    int d;
    int i;
    scanf("%d", &c);
    scanf("%d", &d);
    if (c < d)
    {
        i = c;
        c = d;
        d = i;
    }
    i = d;
    while (c % i != 0 || d % i != 0)
    {
        i = i - 1;
    }
    printf("A ket szam legnagyobb kozos osztoja: %d\n", i);
}*/
/*{
    int f;
    int g;
    printf("Adj meg ket egesz szamot: ");
    scanf("%d", &f);
    scanf("%d", &g);
    int i = f;
    int h = g;
    while (f != g)
    {
        if (f > g)
        {
            f = f - g;
        }
        else
        {
            g = g - f;
        }
    }
    printf("A legkisebb kozos tobbszoros: %d\n", i * h / f);
}*/
/*{
    int q;
    printf("Adj meg egy szamot: ");
    scanf("%d", &q);
    if (q > 5)
    {
        if (q % 2 == 0 || q % 3 == 0 || q % 5 == 0)
        {
            printf("A szam nem primszam\n");
        }
        else
        {
            printf("A szam primszam\n");
        }
    }
    else if (q == 2 || q == 3 || q == 5)
    {
        printf("A szam primszam\n");
    }
    else
    {
        printf("A szam nem primszam\n");
    }
}*/