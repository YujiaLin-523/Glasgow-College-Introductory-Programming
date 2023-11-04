#include <stdio.h>
int main()
{
    int a;
    int b;
    int t;
    printf("请输入两个数字(a>b)\n");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }

    printf("它们的最大公约数为%d\n", a);

    system("pause");
    return 0;
}