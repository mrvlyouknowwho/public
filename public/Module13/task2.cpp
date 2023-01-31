#include <iostream>
#include <vector>

int main ()
{
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> item {1, 1, 0, 3};

    float sum = 0;

    for(int i = 0; i < prices.size(); ++i)
    {
        sum += prices[item[i]];
    }

    std::cout << sum;

}