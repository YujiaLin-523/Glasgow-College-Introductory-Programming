#include<stdio.h>
int main()
{
    int sum=0;
    int count=0;
    int number;
    printf("请输入数字以计算平均数，输入完成后请输入999\n");

    scanf("%d",&number);
    while (number!=999)
    {
        sum+=number;
        count ++;
        printf("请输入下一个数字\n");
        scanf("%d",&number);
    }
    
    double average=1.0*sum/count;
    printf("平均数为%f\n",average);

    system("pause");
    return 0;
}