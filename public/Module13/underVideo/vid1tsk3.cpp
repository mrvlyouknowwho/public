#include <iostream>
#include <vector>
#include <algorithm>


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
    std::sort(vec.begin(), vec.end());
    std::cout << "The second highest number is: " << vec[n-2] << std::endl;
}