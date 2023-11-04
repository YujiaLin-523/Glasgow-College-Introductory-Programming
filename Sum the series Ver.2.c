#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;
    double sign=1.0;
    printf("下面对于数列f(n)=1-1/2+1/3-1/4+...+1/n进行求和，请输入你想求和的项数\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += sign / i;
        sign = -sign;
    }

    printf("f(%d)=%f\n", n, sum);

    system("pause");
    return 0;
}