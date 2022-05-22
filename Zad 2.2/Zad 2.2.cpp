// Zad 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int RandomNum()
{
    int num = 0;
    num = rand() % 10 + 1;
    return num;
}

int main()
{
    int num1 = RandomNum();
    int num2 = RandomNum();
    int num3 = RandomNum();
    int num4 = rand()%10;

    std::cout << "Liczba 1: " << num1 << std::endl;
    std::cout << "Liczba 2: " << num2 << std::endl;
    std::cout << "Liczba 3: " << num3 << std::endl;
    std::cout << "Liczba 3: " << num4 << std::endl;
}
