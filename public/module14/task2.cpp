#include <iostream>
const int SIZE = 3;

char board[SIZE][SIZE];

void initBoard()
{
    for (auto &i : board)
        for (auto &j : i)
            j = ' ';
}

void printBoard()
{
    std::cout << "  1 2 3\n";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << i + 1 << ' ';
        for (int j = 0; j < SIZE; j++)
        {
            std::cout << board[i][j];
            if (j != SIZE - 1) std::cout << '|';
        }
        std::cout << std::endl;
    }
}

bool isTie()
{
    //checking for tie
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == ' ') return false;
    }
    return true;
}

bool hasWon(char player)
{
    // check rows
    for (int i = 0; i < SIZE; i++)
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;

    // check columns
    for (int j = 0; j < SIZE; j++)
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) return true;

    return false;
}
int main()
{
    std::cout << "Welcome to Tic Tac Toe." << std::endl;
    initBoard();
    printBoard();

    char currentPlayer = 'X';
    while (true)
    {
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row - 1][col - 1] != ' ')
        {
            std::cout << "Invalid move. Try again.\n";
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;
        printBoard();

        if (hasWon(currentPlayer))
        {
            std::cout << "Player " << currentPlayer << " has won!\n";
            break;
        }

        if (isTie())
        {
            std::cout << "It's a tie!\n";
            break;
        }

        //change player
        currentPlayer = currentPlayer == 'X' ? 'O' : 'X';
    }
}