#include <fstream>
#include <iostream>

int get_module_fuel(int mass)
{
    return (mass / 3) - 2;
}

int main(void)
{
    std::ifstream file;
    file.open("input.txt");

    std::string str;
    long sum = 0;
    while (file >> str)
    {
        sum += get_module_fuel(std::stoi(str));
    }

    std::cout << sum;

    return 0;
}
