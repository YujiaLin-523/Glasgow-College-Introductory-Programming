#include<stdio.h>
int main()
{
    long long int n=0;
    long long int output=1;
    printf("请输入一个数字以获得它的阶乘\n");
    scanf("%d",&n);

    while (n>0)
    {
        output=output*n;
        n --;
    }
    
    printf("这个数的阶乘是%d\n",output);

    system("pause");
    return 0;
}