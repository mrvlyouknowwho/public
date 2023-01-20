#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cout << "Please input size of array:";
    std::cin >> n;

    std::vector<int> vec(n);

    int sum = 0;
    int i = 0;
    for (auto &index:vec) {
        std::cout << "#" << i << "  :";
        std::cin >> index;
        i++;

        sum += index;
    }

    std::cout << "Arithmetic mean: " << sum / n << std::endl;
}