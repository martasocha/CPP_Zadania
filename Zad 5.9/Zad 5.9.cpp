// Zad 5.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void changeCharInTab(char tab[][4])
{
    int const size = 4;
    char tab1[size][size] = {};

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            tab1[i][j] = tab[size - i-1][size - j -1];
            std::cout << tab1[i][j];
        }
        std::cout << std::endl;
    }

}


int main()
{
    const int size = 4; 
    char tab[size][size] = { {'a','b','c','d'},
        {'e','f','g','h'},
        {'i','j','k','l'},
        {'m','n','o','p'} };

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << tab[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    changeCharInTab(tab);
}

