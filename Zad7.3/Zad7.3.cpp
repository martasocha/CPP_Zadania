// Zad7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>


bool isPrimeNumber(int n)
{
    if (n < 2) // uwzgledniamy 0,1 i wszystkie ujemne
        return false;
    for (int d = 2; d <= sqrt(n); d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout << std::boolalpha << isPrimeNumber(1);
    std::cout << std::boolalpha << isPrimeNumber(11);
    std::cout << std::boolalpha << isPrimeNumber(9);
}
