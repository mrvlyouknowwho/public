#include <iostream>
#include <vector>

int main()
{
    std::vector<int> db(5);
    int number = 0;

    while(true)
    {
        std::cin >> number;
        if(number == -1)
        {
            for(auto index : db)
            {
                std::cout << index << std::endl;
            }
        }
        else
        {
            for(int i = 0; i < db.size(); ++i)
            {
                std::swap(db[i], db[i+1]);
            }
            db.pop_back();
            db.push_back(number);
        }
    }
}