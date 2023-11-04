#include <stdio.h>
int main()
{
    int hour;
    int minute;
    int type;

    printf("请输入现在的时间，格式为24小时制的小时 分钟\n");
    scanf("%d %d", &hour, &minute);
    int time = hour * 60 + minute;
    
    if (0 <= time && time < 360)
    {
        type = 1;
    }
    else if (360 <= time && time < 690)
    {
        type = 2;
    }
    else if (810 < time && time < 1050)
    {
        type = 3;
    }
    else if (1050 <= time && time < 1320)
    {
        type = 4;
    }
    else
    {
        type = 5;
    }

    switch (type)
    {
    case 1:
        printf("天还没亮，继续睡觉\n");
        break;

    case 2:
        printf("上午好，现在是工作时间\n");
        break;

    case 3:
        printf("下午好，现在是摸鱼时间\n");
        break;

    case 4:
        printf("晚上好，现在是休息时间\n");
        break;

    case 5:
        printf("快去睡觉\n");
        break;

    default:
        printf("中午好，现在是吃饭睡觉时间\n");
        break;
    }

    system("pause");
    return 0;
}