#include <iostream>

bool checkPhoneNumber(int number)
{
    int numOfDigits = 0;

    while (number != 0)
    {
        number = number / 10;
        numOfDigits++;
    }
    if (numOfDigits == 8)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 0;
    std::cout << "Podaj numer telefonu: ";
    std::cin >> number;
    std::cout << std::boolalpha << checkPhoneNumber(number);
}