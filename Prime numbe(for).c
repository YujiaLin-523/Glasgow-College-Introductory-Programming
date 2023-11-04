#include<stdio.h>
int main()
{
    int number;
    int i;
    int isPrime=1;  //isPrime=1时这个数是素数
    printf("请输入一个数字\n");
    scanf("%d",&number);

    for ( i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            isPrime=0;
        }
        
    }
    
    if (isPrime==1)
    {
        printf("这个数是素数\n");
    }  else {
        printf("这个数不是素数\n");
    }
    
    system("pause");
    return 0;
}