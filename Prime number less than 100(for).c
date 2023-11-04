#include <stdio.h>
int main()
{
    int x;

    for (x = 2; x < 100; x++)
    {
        int i;
        int isPrime = 1;
        //define
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", x);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}