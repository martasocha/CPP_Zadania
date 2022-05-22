#include <iostream>
#include <iomanip>
#include <cmath>

double roundFunction(double number, int n)
{
    double num = 0;

    int a = 0;
    a = pow(10, n);
    num = round(number * a) / a; // num = 12454/1000 = 12.453
    return num;
}

int main()
{
    double number = 12.4543645;
    int n = 0;
    n = 3;
    std::cout << std::setprecision(10) << number << std::endl;

    std::cout << std::setprecision(10) << roundFunction(number,2) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number,3) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number,4) << std::endl;
    std::cout << std::setprecision(10) << roundFunction(number,5) << std::endl;
}

