#include<stdio.h>
int main()
{
    int x=0;
    int f=0;
    printf("请输入一个数字\n");
    scanf("%d",&x);

    if (x<0)
    {
        f=-1;
    }
      else if (x==0)
    {
        f=0;
    }
      else f=1;

    printf("f=%d",f);

    system("pause");
    return 0;
}