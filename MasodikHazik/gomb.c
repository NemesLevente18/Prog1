#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

float ter(float n)
{
    float T = 0;
    float d = 2 * n, c = 1, o = 6;
    return T = (c / o) * M_PI * (d * d * d);
}
float ker(float n)
{
    float K = 0;
    float d = n;
    return K = 4 * M_PI * d * d;
}
int main ()
{
    float a = 0;
    printf("Adja meg a gomb sugarat: ");
    scanf("%f", &a);
    float q = ter(a), e = ker(a);
    printf("A gomb terfogata: %f\nA gomb felszine: %f\n", q, e);
}