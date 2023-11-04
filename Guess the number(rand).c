#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int a=rand()%10+1;
    printf("已生成一个10以内的整数\n");
    printf("请猜猜这个数\n");
    int number;
    scanf("%d",&number);

    int count=1;
    do
    {
      count++;
      if (number>a)
      {
        printf("请再输入一个小一点的数\n");
      } else {
        printf("请再输入一个大一点的数\n");
      }
      scanf("%d",&number);
    } while (number!=a);

    printf("你猜对了！一共猜了%d次\n",count);
    
    system("pause");
    return 0;   
}