#include <stdio.h>
#include <stdlib.h>

int width, height, playerX, playerY;
char control;

void drawRoom(width, height, playerX, playerY)
{
    // Top line
    printf("+");
    for (int i = 0; i < width; i++)
    {
        printf("-");
    }
    printf("+\n");

    // Horizontal line
    for (int i = 0; i < playerY; i++)
    {
        printf("|");
        for (int i = 0; i < width; i++)
        {
            printf(".");
        }
        printf("|");
    }

    printf("|");
    for (int i = 0; i < playerX; i++)
    {
        printf(".");
    }
    printf("|");

    for (int i = 0; i > playerY && i < height; i++)
    {
        printf("|");
        for (int i = 0; i < width; i++)
        {
            printf(".");
        }
        printf("|");
    }

    // Bottom line
    printf("+");
    for (int i = 0; i < width; i++)
    {
        printf("-");
    }
    printf("+\n");
}

int main()
{
    printf("Use WASD to control the player");
    while (1)
    {

        scanf("%c", &control);

        switch (control)
        {
        case 'W':
            playerY++;
            break;

        case 'S':
            playerY--;
            break;

        case 'A':
            playerX--;
            break;

        case 'D':
            playerX++;
            break;

        default:
            break;
        }

        system("cls");

        drawRoom(width, height, playerX, playerY);

        getchar();
    }
    getchar();
    return 0;
}