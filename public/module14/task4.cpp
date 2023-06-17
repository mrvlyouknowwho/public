#include <iostream>

int main() {
    float a[4][4], b[4], c[4] = {0};

    std::cout << "Enter Matrix 4x4: " << std::endl;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            std::cin >> a[i][j];

    std::cout << "Enter Vector of size 4: " << std::endl;
    for (int i = 0; i < 4; i++)
        std::cin >> b[i];

    //main func
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            c[i] += a[i][j] * b[j];

    std::cout << "Result: ";
    for (int i = 0; i < 4; i++)
        std::cout << c[i] << ' ';
}