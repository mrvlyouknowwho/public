#include <iostream>
#include <string>

void print_answer(const std::string &answer)
{
    std::cout << answer << std::endl;
    exit(0);
}

void lines_check(std::string *lines)
{
    for(int i = 0; i < 3; i++)
    {
        if(lines->length() != 3)
        {
            print_answer(std::string("Incorrect. Length should be 3"));
        }
        for(auto symbol : lines[i])
        {
            if(!(symbol == 'X' || symbol == 'O' || symbol == '.'))
            {
                print_answer(std::string("Incorrect. Only characters X, O and dot are allowed"));
            }
        }
    }
}

int main()
{
    std::string lines[3];
    std::cin >> lines[0] >> lines[1] >> lines[2];

    lines_check(lines);

}