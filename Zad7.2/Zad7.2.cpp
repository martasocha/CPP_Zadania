// Zad7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

char dec2HexDigit(int d)
{
    char result;

    if (d < 0 || d>15)
        return '-';

    if (d > 9)
    {
        result = d + 'A' - 10;
    }
    else
    {
        result = d + '0';
    }
    return result;
}



std::string dec2Hex(int number)
{
    std::string result;

    do
    {
        int r = number % 16;
        number /= 16;

        result += dec2HexDigit(r);
        //result = dec2HexDigit(r) + result;
    } while (number > 0);
    std::reverse(result.begin(), result.end());
    return result;
}

int main()
{
    std::cout << dec2Hex(30);
}

