// Zad 4.5 Napisz funkcj�, kt�ra zamienia litery w Stringu na ma�e, zwraca String.

#include <iostream>

std::string toLowerCase(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        str.at(i) = std::tolower(str.at(i));
    }
    return str;
}

int main()
{
    std::cout << toLowerCase("Zmien Na Male");
}

