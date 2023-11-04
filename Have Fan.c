#include<stdio.h>
int main()
//初始化
{
    int choice1;
    int HP=3;
    //游戏开始 进行变量赋值
    printf("现在你正在学习生物选修三生物工程，在你发现课本上的奶牛时，教室非常安静\n");
    printf("请选择你下面要说的话\n1.哞 2.好可爱的奶牛");
    scanf("%d",&choice1);
   
    if (choice1==2)
    {
       printf("周围同学笑了一下，你没有惊动范\n");
    }
    else
      { printf("同学们哄堂大笑，你被范攻击了\n");
       HP=HP-1;
       printf("HP=2\n请注意发言\n");
       printf("请选择你下面要说的话\n1.嗯？我说哞没说范 2.对不起范哥我错了");
       //第一轮结束  
       int choice2;
       int HP=2;
       //第二轮开始 进行变量赋值
       scanf("%d",&choice2);
       if (choice2==2)
       {
        printf("范说：“叫你长长记性。”\nHP=2\n你惊动了范，但逃过一劫\n");
       }
       else{
        printf("范又打你一拳，说：“你想好了？”\n");
        printf("HP=1\n请注意发言\n请选择你下面要说的话\n1.又撂蹄子啦 2.对不起范哥我错了");
        //第二轮结束
        int choice3;
        int HP=1;
        //第三轮开始 进行变量赋值
        scanf("%d",&choice3);
        if (choice3==2)
        {
            printf("范说：“我看你是活够了。”");
            printf("你死里逃生\n");
        }
        else{
         printf("范重击一拳，说：“管不听你了？”\nHP=0\n游戏结束\n下次说话前一定要想好了\n");
        }
        //第三轮结束
       }
      }  
    system("pause");
    return 0;
//程序结束
}