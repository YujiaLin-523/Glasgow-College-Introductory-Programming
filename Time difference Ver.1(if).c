#include<stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;

    printf("请输入两个时间","格式为小时 分钟");
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int ih=hour2-hour1;
    int im=minute2-minute1;

    if (im<0)
    {
       im=60+im;
       ih=ih-1;
    }
    
    printf("时间差是%d小时%d分钟.\n",ih,im);

    system("pause");
    return 0;
    }