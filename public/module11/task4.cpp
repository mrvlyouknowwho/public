#include <iostream>
#include <string>
#include <algorithm>

void print_answer(const std::string &answer)
{
    std::cout << answer << std::endl;
    exit(0);

}

void check_valid_chars(char &chip)
{
    if(!(chip == 'X' || chip == 'O' || chip == '.'))
    {
        print_answer(std::string("Incorrect. Only characters X, O and dot are allowed"));
    }
}

void get_coordinate_point(int &step_x, int &step_y, const std::string *lines)
{
    if(lines[step_x].length() != 3)
    {
        print_answer(std::string("Incorrect. Length should be 3"));
    }

    char symbol_array[3];
    int count(0);
    for(auto symbol : lines[step_x])
    {
        symbol_array[count] += symbol;
        count++;
    }
    char chip = symbol_array[step_y];

    check_valid_chars(chip);



}


void find_winner(const std::string *lines)
{
/*    int step_x(0), step_y(0);*/
    for(int i(0);i < 3; i++)
    {
        for(int step : )
        {
            step++;
        }
    }


/*     if(std::count(lines[i].begin(), lines[i].end(), 'X') == 3)
       {
           print_answer(std::string("Winner X!"));
       }
       else if(std::count(lines[i].begin(), lines[i].end(), 'O') == 3)
       {
           print_answer(std::string("Winner O!"));
       }
       else
       {
           print_answer(std::string("Winner no one!"));
       }
*/
/*

        for(auto chip : lines[i])
        {
            if(!(chip == 'X' || chip == 'O' || chip == '.'))
            {
                print_answer(std::string("Incorrect. Only characters X, O and dot are allowed"));
            }
        }
*/

}

int main()
{
    int step_x(0), step_y(0);

    std::string lines[3];
    std::cin >> lines[0] >> lines[1] >> lines[2];

/*    check_horizontal_line(lines);
    check_vertical_line(lines);*/
    get_coordinate_point(step_x,step_y, lines);

}