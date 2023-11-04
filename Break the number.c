#include <stdio.h>
int main()
{
    printf("请输入一个整数以分解得到它的各位数字\n");
    int number;
    scanf("%d", &number);
    int x = number;
    int mask = 1;
    //读取数字
    while (x > 9)
    {
        x /= 10;
        mask *= 10;
    }
    //printf("%d", mask);
    //计算数字位数，获得一个mask，数字除以mask可以得到当前的最高位数字
    do
    {
        int i = number / mask;
        printf("%d", i);
        if (mask >= 10)
        {
            printf(" ");
        }
        number %= mask;
        mask /= 10;
        
    } while (mask > 0);
    printf("\n");

    system("pause");
    return 0;
}