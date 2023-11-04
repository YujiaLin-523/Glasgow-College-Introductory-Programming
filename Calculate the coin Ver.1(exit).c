#include <stdio.h>
int main()
{
    int money;
    int one, two, five;
    int exit=0;
    printf("请输入总金额\n");
    scanf("%d", &money);

    for (one = 1; one < money * 10; one++)
    {
        for (two = 1; two < money * 10 / 2; two++)
        {
            for (five = 1; five < money * 10 / 5; five++)
            {
                if (one * 1 + two * 2 + five * 5 == money * 10)
                {
                    printf("需要%d个一角硬币，%d个两角硬币，%d个五角硬币来得到%d元\n", one, two, five,money);
                    exit = 1;
                    break;
                }    
            }
            if (exit)
                break;
        }
        if (exit)
            break;
    }
    system("pause");
    return 0;
}