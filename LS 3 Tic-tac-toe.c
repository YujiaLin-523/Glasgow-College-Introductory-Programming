#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[9] = {'.', '.', '.', '.', '.', '.', '.', '.', '.'};
void draw_board()
{
    for (int i = 0; i < 9; i += 3)
    {
        printf("  %c   %c   %c  \n\n", board[i], board[i + 1], board[i + 2]);
    }
}

void draw_x(int position)
{
    board[position] = 'X';
    draw_board();
}

void draw_o(int position)
{
    board[position] = 'O';
    draw_board();
}

int check_win()
{
    int win_conditions[8][3] =
        {
            {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

    for (int i = 0; i < 8; i++)
    {
        if (board[win_conditions[i][0]] == board[win_conditions[i][1]] &&
            board[win_conditions[i][1]] == board[win_conditions[i][2]] &&
            board[win_conditions[i][0]] != '.')
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int position, keypad;
    char player = 'X';

    // The game begins
    while (1)
    {
        // Draw the blank board
        system("cls");
        draw_board();
        // Human Player plays
        if (player == 'X')
        {
            printf("Please choose your position.(1-9)\n");
            // Transform the input of keypad to position on the board
            scanf("%d", &keypad);
            if (keypad < 4)
            {
                position = keypad + 5;
            }
            else if (keypad < 7)
            {
                position = keypad - 1;
            }
            else
            {
                position = keypad - 7;
            }
        }
        // Comuputer player plays
        else
        {
            while (1)
            {
                srand(time(0));
                int random_position = rand() % 9 + 1;
                // Check if the position is available
                if (board[random_position] == '.')
                {
                    position = random_position;
                    break;
                }
                else
                    continue;
            }
        }

        // Draw the X or O
        if (board[position] == '.')
        {

            board[position] = player;

            // Check if somebody wins
            if (check_win())
            {
                system("cls");
                draw_board();
                printf("%c wins!\n", player);
                getchar();
                break;
            }
            else if (board[0] != '.' && board[1] != '.' && board[2] != '.' &&
                     board[3] != '.' && board[4] != '.' && board[5] != '.' &&
                     board[6] != '.' && board[7] != '.' && board[8] != '.')
            {
                system("cls");
                draw_board();
                printf("Nobody wins!\n");
                getchar();
                break;
                // printf("Press any key to continue.\n");
                // getchar();
            }
            else
            {
                // Change the player
                player = (player == 'X') ? 'O' : 'X';
                printf("Change the player.\n");
            }
        }
        // Remind the player that the position is not available
        else
        {
            getchar();
            if (player == 'X')
            {
                printf("The position has been used.Please choose again.\nPress any key to continue.\n");
            }
            else printf("Press Enter to let computer to choose the position.\n");

            getchar();
        }
    }

    getchar();
    return 0;
}