#include <fstream>
#include <iostream>

int get_module_fuel(int mass)
{
    return (mass / 3) - 2;
}

int main(void)
{
    std::ifstream file;
    file.open("input2.txt");

    std::string str;
    long sum = 0;
    while (file >> str)
    {
        int fuel = get_module_fuel(std::stoi(str));
        while (fuel > 0)
        {
            sum += fuel;
            fuel = get_module_fuel(fuel);
        }
    }

    std::cout << sum;

    return 0;
}
