#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cout << "Please input size of array:";
    std::cin >> n;

    std::vector<int> vec(n);

    int i = 0;
    for (auto &index:vec) {
        std::cout << "#" << i << "  :";
        std::cin >> index;
        i++;
    }

    std::cout << "\n";
    std::cout << "Result" << std::endl;

    int j = 0;
    for(;i > 0; i--)
    {
        std::cout << "#" << j  << "  :" << vec[i - 1] << std::endl;
        j++;
    }
}