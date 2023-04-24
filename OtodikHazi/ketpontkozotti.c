#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

int main()
{
    Pont a = {1, 4};
    Pont b = {6, 5};

    printf("A ket pont tavolsaga: %.2lf\n", distance(a, b));

    return 0;
}
