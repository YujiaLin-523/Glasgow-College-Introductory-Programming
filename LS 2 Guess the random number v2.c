// Program Name:"Guess the number"game
// Purpose:Randomly gives player a number,and the player will guess it.Afterwards,the program will give a feedback
// Name:Lin Yujia
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int randomNumber, temp, minNumber, range, guess;
    int attempts = 0;
    randomNumber = (rand() % 31 + 8) * 4;
    printf("Guess a number that can be devided by 4 between 32 and 156.\nIf you guess the number within 4 times, you will win the game.\n");
    while (1)
    {
        scanf("%d", &guess);
        attempts++;

        if (guess == randomNumber && attempts > 4)
        {
            printf("You are right!Now let's begin the next game.\n");
            printf("--------------------------------------------\n");
            getchar();

            printf("You have guessed %d times.\n", attempts);
            randomNumber = (rand() % 31 + 8) * 4;
            attempts = 0;
        }
        else if (guess == randomNumber && attempts <= 4)
        {
            printf("You win! You have guessed %d times.\n", attempts);
        }
        else
        {
            printf("You are wrong.");

            if (guess < randomNumber)
            {
                printf("Guess a bigger number.\n");
            }
            else
            {
                printf("Guess a smaller number.\n");
            }
        }
    }

    getchar();
    return 0;
}