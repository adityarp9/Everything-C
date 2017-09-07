// Done almost. Prepare it for CS50
#define _XOPEN_SOURCE 500 // Macro for usleep function

#include <stdio.h>
#include <cs50.h>
#include <ctype.h> // isupper() function
#include <unistd.h> // usleep() function

const int dimMin = 2, dimMax = 9;
int d; // Dimensions of board
int bi, bj; // Blank tile position
int moveT; // Tile to be moved
int mi, mj; // Moved tile position

int moves = 0;

// Greeting the user to begin the game.
void greeting();

// Initializing the board.
void init(int values[d][d]);

// Print out the board
void draw(int values[d][d]);

// Make a move
void move(int values[d][d]);

// Check if player has won the game
bool won(int values[d][d]);

void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

int main(void)
{

    greeting();

    do
    // Asking to set up the valid dimensions of the board.
    {
        printf("\nWhat should be the dimensions of the board?\n");
        d = GetInt();
        if (d < dimMin || d > dimMax)
            printf("Minimum dimension should be 3.Maximum dimension should be 9.\n ");
    }
    while(d < dimMin || d > dimMax);
    bi = d - 1;
    bj = d - 1;

    // Setting up dimensions of the board!
    int board[d][d];
    printf("\nCool. So on let's initialize the board, shall we?\n");

    init(board); // Initialize board values
    clear(); // Clear screen
    draw(board); // Print board!

    while (!(won(board)))
    {
        printf("\nMoves: %d\n", moves);
        move(board);
        clear();
        draw(board);
    }
    printf("You won!\nYour total moves were %d.\n", moves);

    // Save the player's number of moves in a file log.txt
    FILE* f1 = fopen("log.txt", "a+");
    if (f1 == NULL)
    {
        printf("Error creating log file. Player's username and progress will not be saved.\nPlease try again\n");
        return 5;
    }
    fprintf(f1, " | Moves: %d\n", moves);
    fclose(f1);

}


void greeting()
{
    // Signing up the player.
   printf("Welcome to the Game Of Fifteen!\n");
   usleep(3000000);
   clear();
   printf("Let's sign you up!\n");
   string name;
   int i, flag;

   // Asking to select a valid username *(Only lower-case letters)*
   do
   {
      printf("Username: ");
      name = GetString();
      i = 0;
      while (name[i] != '\0')
      {
          flag = 0;
          if (isupper(name[i]))
          {
            flag = 1;
            printf("Wrong, try again. Only lower-case charachters, symbols and numbers allowed.\n");
            break;
          }
          i++;
      }
   }
   while(flag == 1);

   // Asking if the player wants to change the username or move on.
   printf("\nReady to play?\tChange your username?\n\nHit 'y' for former and 'n' for latter.\n");
   char sure = GetChar();
   if ((sure == 'n' || sure == 'N') && (sure != 'y' || sure != 'Y'))
        greeting();
   else
   {
        printf("\nGreat! Use your username \"%s\" to sign in.\n", name); // The username is correct, and player is informed!

        // Save the player's username a file log.txt
        FILE* f1 = fopen("log.txt", "a+");
        if (f1 == NULL)
        {
            printf("Error creating log file. Player's username and progress will not be saved.\nPlease try again\n");
            return;
        }
        fprintf(f1, "Username: %s ", name);
        fclose(f1);
   }
   return;
}

void init(int values[d][d])
{
    // --->Generate a reversed board!<---
        for (int i = 0, x = d * d - 1; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                values[i][j] = x;
                x--;
            }
        }

    // Swapping positions of 1 and 2 when appropriate
        if ((d * d) % 2 != 0)
        {
            int temp = values[d - 1][d - 2];
            values[d - 1][d - 2] = values[d - 1][d - 3];
            values[d - 1][d - 3] = temp;
        }

    return;
}


void draw(int values[d][d])
{
    for (int i = 0; i < d; i++)
    {
        printf("|");
        for (int j = 0; j < d; j++)
        {
            if (values[i][j] == 0)
                printf(" __");
            else
                printf(" %2d", values[i][j]);
        }
        printf(" |\n");
    }
    printf("\nHere's your board!\n");

    return;
}

void move(int values[d][d])
{
    int flag = 0;
    printf("\nWhich tile to move? : ");
    moveT = GetInt();

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (values[i][j] == moveT) // Storing the position of tile to be moved.
            {
                flag++;
                mi = i;
                mj = j;
            }
            if (values[i][j] == 0) // Storing the position of the blank tile.
            {
                flag++;
                bi = i;
                bj = j;
            }
            if (flag == 2)
                break;
        }
    }
    // Swap blank tile and tile to be moved.
    if (values[bi][bj + 1] == moveT || values[bi][bj - 1] == moveT || values[bi + 1][bj] == moveT || values[bi - 1][bj] == moveT)
    {
        int temp = values[bi][bj];
        values[bi][bj] = values[mi][mj];
        values[mi][mj] = temp;
        moves++;
    }
    // Print illegal move!
    else
    {
        printf("Illegal move! Try again please.\n");
        usleep(2000000);
    }

    return;
}
// Check if the game has been won!
bool won(int values[d][d])
{
    int array[d * d];
    for (int i = 0, x = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            array[x++] = values[i][j];
        }
    }
    for (int i = 0, x = d * d; i < x - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
        }
    }

    return true;
}
