// Program Name:Roguelikes
// Purpose:Draw a room in the game //Name:Lin Yujia
#include <stdio.h>
#include <stdlib.h>

int width, height, playerX, playerY;
char control;

void horizontal_line(width)
{
    printf("+");
    for (int i = 0; i < width; i++)
    {
        printf("-");
    }
    printf("+\n");
}

void empty_line(width)
{
    printf("|");
    for (int j = 0; j < width; j++)
    {
        printf(".");
    }
    printf("|\n");
}

void player_line(playerX,width)
{
    printf("|");
    for (int k = 0; k < width; k++)
    {
        if (k != playerX)
        {
            printf(".");
        }
        else
            printf("@");
    }
    printf("|\n");
}

void drawRoom(width, height,  playerX,  playerY)
{
    horizontal_line(width);

    for (int x = 0; x < height; x++)
    {
        if (x != playerY)
        {
            empty_line(width);
        }
        else
            player_line(playerX, width);
    }

    horizontal_line(width);
}

int main()
{
    drawRoom(2, 2, 0, 1);
    drawRoom(5, 3, 1, 2);
    drawRoom(14, 8, 8, 5);
    printf("Use WASD to control the player\n");
    /*while (1)
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
    }*/
    getchar();
    return 0;
}