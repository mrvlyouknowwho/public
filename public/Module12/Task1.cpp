#include <iostream>
#include <string>
int main()
{
    std::string Surnames_of_residents[10];
    int n[3];

    for(int i = 0; i < 10; i++)
    {
        std::cout << "Enter the last name of the tenant of apartment #" << i << std::endl;
        std::cin >> Surnames_of_residents[i];
    }

    std::cout << "Enter 3 apartment numbers" << std::endl;
    for(int &i : n)
    {
        std::cin >> i;
        if(i > 9 || i < 0)
        {
            std::cout << "Incorrect number" << std::endl;
            return 0;
        }
    }

    for(auto &index : n)
        std::cout << Surnames_of_residents[index] << " lives in the " << index << " apartment." << std::endl;
}