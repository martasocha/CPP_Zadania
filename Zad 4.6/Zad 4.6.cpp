//Zad. 4.6 Napisz funkcjê, która bêdzie zamieniaæ znaki od 3 do 6 w Stringu na „abcd”

#include <iostream>

std::string changeCharInString(std::string str) {

    if (str.size() >= 6)
    {
        //replace(poczatek, dlugosc, tekst)
        str = str.replace(2, 4, "abcd");
        return str;
    }
    else
        return "ciag jest zbyt maly";
}

int main()
{
    std::cout << changeCharInString("tekst do zmiany") << std::endl;
    std::cout << changeCharInString("zajecia") << std::endl;
    std::cout << changeCharInString("slowo") << std::endl;
}

