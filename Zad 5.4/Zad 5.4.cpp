// Zad 5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int const size = 10;
    int num[size] = {};
    int n = 0;
    int m = 0;

    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 10 + 1;
        std::cout << num[i] << "; ";
    }
    std::cout << std::endl;
}
