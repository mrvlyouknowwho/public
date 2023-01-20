#include <iostream>
#include "vector"

std::vector<int> add (std::vector<int> vec, int val)
{
    std::vector<int> newVec (vec.size() + 1);
    for(int i = 0; i < vec.size(); i++)
        newVec[i] = vec[i];
    newVec[vec.size()] = val;
    return newVec;
}

int main()
{
    std::vector<int> id;

    int num = 0;
    while(num != -1)
    {
        std::cout << "Please enter the robot ID:";
        std::cin >> num;

        id = add(id, num);
    }

    for(auto &index:id)
    {
        std::cout << index << std::endl;
    }
}