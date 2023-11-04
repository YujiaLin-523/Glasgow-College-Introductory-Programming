#include <stdio.h>
int main()
{
    int ans1;
    printf("This letter is for myself after four years of university life.\n");
    printf("How about your life now?Do you learn a lot?\n1.Yes 2.No\n");
    scanf("%d", &ans1);
    if (ans1 == 1)
    {
        printf("I believe you will break your new ground using your skills.\n");
        printf("Do you have a clear plan for your future life?\n1.Yes 2.No\n");
        int ans2;
        scanf("%d", &ans2);
        if (ans2 == 1)
        {
            printf("I know you will live up to my expectation!Just enjoy your life and do what you love!\n");
        }
        else
        {
            printf("Find a target so that you can choose a right way.\n");
        }
    }
    else
    {
        printf("Time is flying.Grab now and keep moving.\n");
    }

    system("pause");
    return 0;
}