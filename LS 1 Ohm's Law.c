// Program Name:Ohm's Law
// Purpose:Use Ohm's Law to compute the current of the circuit //Name:Lin Yujia
#include <stdio.h>
int r1 = 100, r2 = 200, r3 = 300, r4 = 400, r5 = 500, r6 = 600, r7 = 700;

double Ohm_Law(double U, double R)
{
    double I = U / R;
    return I;
}

double series(double r1, double r2)
{
    double series_r = r1 + r2;
    return series_r;
}

double parallel(double r3, double r4)
{
    double parallel = (r3 * r4) / (r3 + r4);
    return parallel;
}

double parallel_3 = 500 + (600 * 700) / (600 + 700);

double main()
{
    double series_r = series(r1, r2);
    double parallel_2 = parallel(r3, r4);
    double result = 1 / series_r + 1 / parallel_2 + 1 / parallel_3;

    double current = 1000 * Ohm_Law(12, 1 / result);
    printf("The current is %lf mA\n", current);

    getchar();
    return 0;
}