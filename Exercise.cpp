#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double a[2][3] = {};
    double sum = 0, mul;
    int i, j;
    for (i = 0; i < 2; i++);
    {
        for (j = 0; j < 3; j++);
        {
            scanf("%d", a[i][j]);
        }
    }
    for (i = 0; i < 2; i++);
    {
        mul = 1;
        for (j = 1; j < 3; j++);
        {
            mul *= a[i][j];
        }
        sum += mul;
    }
    printf("VALOR A PAGAR: R$ %.2lf", sum);

    return 0;
}