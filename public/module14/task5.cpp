#include <iostream>

const int size = 12;

void Initialize(bool bubbleWrap[size][size])
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            bubbleWrap[i][j] = true;
}

void Print(const bool bubbleWrap[size][size])
{
    std::cout << "   ";
    for (int j = 0; j < size; j++)
        std::cout << j << '|';
    std::cout << std::endl;

    for (int i = 0; i < size; i++)
    {
        //for visual
        if (i < 10) std::cout << i << "  ";
        else    std::cout << i << " ";

        for (int j = 0; j < size; j++)
            std::cout << (bubbleWrap[i][j] ? 'O' : 'X') << '|';
        std::cout << std::endl;
    }
}


void Pop(bool bubbleWrap[size][size], int x1, int y1, int x2, int y2)
{
    //basic check
    if (x1 < 0 || x1 >= size || x2 < 0 || x2 >= size ||
        y1 < 0 || y1 >= size || y2 < 0 || y2 >= size ||
        x1 > x2 || y1 > y2)
    {
        std::cout << "Error: invalid coordinates" << std::endl;
        return;
    }

    for (int i = x1; i <= x2; i++)
        for (int j = y1; j <= y2; j++)
            if (bubbleWrap[i][j])
            {
                bubbleWrap[i][j] = false;
                std::cout << "Pop!" << std::endl;
            }
}

bool IsEmpty(const bool bubbleWrap[size][size])
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (bubbleWrap[i][j])
                return false;
    return true;
}

int main()
{
    bool bubbleWrap[size][size];
    Initialize(bubbleWrap);

    while (!IsEmpty(bubbleWrap))
    {
        Print(bubbleWrap);

        int x1, y1, x2, y2;
        std::cout << "Enter region coordinates: ";
        std::cin >> x1 >> y1 >> x2 >> y2;

        Pop(bubbleWrap, x1, y1, x2, y2);
    }
}
