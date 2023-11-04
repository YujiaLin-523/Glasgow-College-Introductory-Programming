#include<stdio.h>
int main()
{
    int number;
    int x=0;
    int y=0;
    printf("请输入一个数字以获得这个数的逆排序\n");
    scanf("%d",&number);

    while (number>0)
    {
        x=number%10; 
        number/=10;
        y=y*10+x;
    }
    
    printf("这个数的逆序是%d\n",y);

    system("pause");
    return 0;
}