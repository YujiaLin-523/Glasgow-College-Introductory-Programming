#include<stdio.h>
int main()
{
    int red;
    int black;
    int white;
    //red=3,white=5,black=6,pick 8 balls,pick at least 1 red and 1 white balls
    for (red=1; red < 3; red++)
    {
        for ( white  = 1; white  < 5; white ++)
        {
            for (black = 6; black <= 6&black>0; black--)
            {
                printf("%dred balls,%dwhite balls,%dblack balls\n",red,white,black);
                break;
            }
            break;
        }
       
    }
    
    system("pause");
    return 0;
}