#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

float ter(float n)
{
    float T = 0;
    return T = (n * n) * M_PI;
}
float ker (float n)
{
    float K = 0;
    return K = 2 * M_PI * n;
}
int main ()
{
    float r, z, c = 1;
    printf("Adja meg a kor sugarat: ");
    scanf("%f", &r);
    if (r != 0)
    {
        float terulet = ter(r);
        float kerulet = ker(r);
        printf("A kor terulete: %f\nA kor kerulete: %f\n", terulet, kerulet);
    }
    else
    {
        printf("Nullatol kulonbozo erteket kernek.\n");
    }
}