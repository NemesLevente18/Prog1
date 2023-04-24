#include <stdio.h>
#include <math.h>

int ossznegy(int ossz2);
int negyossz(int ossz1);

int main()
{
    int ossz1 = 0, ossz2 = 0;
    printf("%d\n", ossznegy(ossz2) - negyossz(ossz1));
    return 0;
}

int negyossz(int ossz1)
{
    for (int i = 1; i < 101; i++)
    {
        ossz1 += pow(i, 2);
    }
    return ossz1;
}

int ossznegy(int ossz2)
{
    int j = 1, nak = 0;
    while (j != 101)
    {
        nak += j;
        j++;
    }
    ossz2 = pow(nak, 2);
    return ossz2;
}