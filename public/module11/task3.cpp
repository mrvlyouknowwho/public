#include <iostream>
#include <string>

void print_answer(const std::string &answer)
{
    std::cout << answer << std::endl;
    exit(0);
}

void validate_octet(const std::string &octet)
{
    int number = std::stoi(octet);
    if (std::to_string(number).length() != octet.length() || number > 255)
    {
        print_answer(std::string("This octet is not valid: ").append(octet));
    }
}

void validate_ip(const std::string &address)
{
    if(address.length() > 15 ||address.length() <= 0)
    {
        print_answer(std::string("Address's size is invalid"));
    }

    int dot_count = 0;
    std::string string;

    for(auto symbol : address)
    {
        if(symbol == '.')
        {
            string.length() != 0 ? validate_octet(string) : print_answer(("One of the octets is empty!"));
            string.clear();
            dot_count++;
        }
        else
        {
            bool match = !!std::isdigit(symbol);
            std::cout << match << std::endl;

            if(isdigit(symbol)) {string += symbol;}
            else {print_answer(std::string("This symbol is not digit: ") += symbol);}
        }
    }

    if(string.empty()) {print_answer("Last of the octets is empty!");}
    else {validate_octet(string);}

    dot_count != 3 ? print_answer("Amount of octets is incorrect!") : print_answer(("IP address is valid!"));
}

int main()
{
    std::string address;

    std::cout << "Enter IP:" << std::endl;
    std::cin >> address;
    validate_ip(address);
}