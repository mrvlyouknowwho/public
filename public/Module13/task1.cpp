#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int vecSize;
    std::cout << "Please input size of your vector" << std::endl;
    std::cin >> vecSize;

    std::vector<int> vec;
    std::cout << "Please input numbers in vector" << std::endl;
    for(int i = 0; i < vecSize; ++i)
    {
        int number;
        std::cout << "Input:";
        std::cin >> number;
        vec.push_back(number);
    }

    std::cout << "Now enter the number you want to delete in the vector" << std::endl;
    int delNumber;
    std::cin >> delNumber;

    int co = 0;
    for(int i : vec)
    {
        if(i == delNumber)
        {
            ++co;
        }
    }

    for(int i = 0; i < co; ++i)
    {
        for(int j = 0; j < vec.size(); ++j)
        {
            if(vec[j] == delNumber)
            {
                std::swap(vec[j], vec[j+1]);
            }
        }
        vec.pop_back();
    }

    int i = 0;
    for(auto number : vec)
    {
        std::cout << i <<":\t" << number <<std::endl;
        ++i;
    }

}