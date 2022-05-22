// Zad 4.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

void SplitString(std::string str, char c)
{
    int index = 0;
    index = str.find(c);
    int l = str.length();

    if (index != std::string::npos)
    {
        std::cout << "Znaleziono tekst na pozycji: " << index << std::endl;
        std::string str1 = str.substr(0,index);
        std::cout << str1 << std::endl;
        std::string str2 = str.substr(index,l);
        std::cout << str2 << std::endl;
    }
    else
    {
        std::cout << "Nie znaleziono";
    }
    
    
}

int main()
{
    std::string str = "Ala ma: kota, psa i mysz";
    char c = ':';
    SplitString(str, c);

}