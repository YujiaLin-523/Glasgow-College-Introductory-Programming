#include <stdio.h>
void sum(int begin, int end)
{
    int i;
    int sum = 0;
    for (i = begin; i <= end; i++)
    {
        sum = sum + i;
    }
    printf("从%d到%d的和为%d\n", begin, end, sum);
}
int main()
{
    int begin, end;
    printf("请输入你要求和的区间端点\n");
    scanf("%d %d", &begin, &end);
    sum(begin, end);
    system("pause");
    return 0;
}