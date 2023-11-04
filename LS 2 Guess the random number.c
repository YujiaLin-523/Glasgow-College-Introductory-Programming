// Program Name:"Guess the number"game
// Purpose:Randomly gives player a number,and the player will guess it.Afterwards,the program will give a feedback
// Name:Lin Yujia
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;
    int bestAttempts = -1;
    int game = 0;

    printf("Guess a number between 1 and 10. If you guess the number within 4 times, you will win the game.\n");

    while (1)
    {
        scanf("%d", &guess);
        attempts++;

        if (guess == randomNumber && attempts > 4)
        {
            printf("You are right!Now let's begin the next game.\n");
            printf("--------------------------------------------\n");
            game++;
            getchar();

            if (bestAttempts == -1 || attempts < bestAttempts)
            {
                bestAttempts = attempts;
            }

            printf("You have guessed %d times.\n", attempts);
            if (game > 1)
            {
                printf("Best score:%d\n", bestAttempts);
            }

            randomNumber = rand() % 10 + 1;
            attempts = 0;
        }
        else if (guess == randomNumber && attempts <= 4)
        {
            game++;
            if (bestAttempts == -1 || attempts < bestAttempts)
            {
                bestAttempts = attempts;
            }

            printf("You win! You have guessed %d times.\n", attempts);
            if (game > 1)
            {
                printf("Best score:%d\n", bestAttempts);
            }
            getchar();
            break;
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