//Zad. 4.8 Napisz funkcj�, kt�ra b�dzie zamienia� ostatni znak z pierwszym w Stringu.

#include <iostream>
#include <string>

std::string changeCharInString(std::string str) 
{
    char lastChar = 0;

    lastChar = str.back();
    str.back() = str.front();
    str.front() = lastChar;
    return str;

}

int main()
{
    std::cout << changeCharInString("Hello World!") << std::endl;

}
