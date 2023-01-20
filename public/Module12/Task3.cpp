#include <cassert>
#include <iostream>

float travelTime(float distance, float speed);
int main()
{
    float distance;
    float speed;

    std::cout << "please input distance:";
    std::cin >> distance;
    std::cout << "please input speed:";
    std::cin >> speed;

    std::cout << travelTime(distance, speed);
}

float travelTime(float distance, float speed)
{
    assert(speed > 0);
    assert(distance >= 0);
    return distance / speed;
}