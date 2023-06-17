#include <iostream>

const int N = 4;

void toDiagonal(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i != j)
                matrix[i][j] = 0;
}

bool areEqual(int A[N][N], int B[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (A[i][j] != B[i][j])
                return false;
    return true;
}

void printMatrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            std::cout << matrix[i][j] << ' ';

        std::cout << std::endl;
    }
}

int main()
{
    int A[N][N], B[N][N];

    std::cout << "Enter matrix A: " << std::endl;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> A[i][j];

    std::cout << "Enter matrix B: " << std::endl;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> B[i][j];

    if (areEqual(A, B))
    {
        std::cout << "Matrices are equal" << std::endl;
        toDiagonal(A);

        std::cout << "Diagonal matrix: " << std::endl;
        printMatrix(A);



    }
    else
    {
        std::cout << "Matrices are not equal" << std::endl;

        std::cout << "Matrix A: " << std::endl;
        printMatrix(A);

        std::cout << "Matrix B: " << std::endl;
        printMatrix(B);
    }

}
