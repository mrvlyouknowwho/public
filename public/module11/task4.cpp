#include <iostream>

bool valid_char(char a[3][3], int &x, int &o)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 'X') x++;
            else if(a[i][j] == 'O') o++;
            else if(a[i][j] == '.') continue;
            else return false;
        }
    return true;
}

void result(const char &winner, const int &x, const int &o)
{
    if(winner == 'X')
    {
        if(o == x-1) std::cout << "X win.";
        else std::cout << "Incorrect.";
    }
    else if(winner == 'O')
    {
        if(x == o-1) std::cout << "O win.";
        else std::cout << "Incorrect.";
    }
    else
    {
        if(o > x) std::cout << "Incorrect.";
        else if (o == x || o == x-1) std::cout << "Nobody.";
    }
}

char winner_check(char a[3][3], char &winner)
{
    for(int i = 0; i < 3; i++)
    {
        if((a[i][0] == a[i][1]) && (a[i][0] == a[i][2])) winner = a[i][0];
        if((a[0][i] == a[1][i]) && (a[0][i] == a[2][i])) winner = a[0][i];
    }
    if((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])) winner = a[1][1];
    if((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])) winner = a[1][1];
    return winner;
}
int main()
{
    char a[3][3];
    int x(0),o(0);
    char winner = '.';

    for(auto & i : a)
        for(char & j : i)
            std::cin >> j;

    if(!valid_char(a,x,o))
    {
        std::cout << "Incorrect.";
        return 0;
    }
    else
    {
        winner_check(a,winner);
        result(winner,x,o);
    }
}
