#include <stdio.h>
#include <math.h>

int main() 
{
    double h, i;
    printf("Enter h -> ");
    scanf("%lf", &h);
    printf("x               f(x)\n");
    printf("--------------------\n");
    for (double x; x < 100; x = h * i)
    {
        if (0 <= x && x <= 1.5)
        {
            double y = pow(2, x) - 2 + pow(x, 2);
            printf("%lf             ", x);
            printf("%lf\n", y);
        }
        if (1.5 < x && x <= 3)
        {
            double z = sqrt(x) * exp(-pow(x, 2));
            printf("%lf             ", x);
            printf("%lf\n", z);
        }
        i++;
    }
    return 0;
}