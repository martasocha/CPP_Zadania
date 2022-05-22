// Zad7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int n = 7;
    int l = 0;//ta zmienna przechowuje kolejne wartosci sprawdzanych liczb naturalnych

    for (int i = 0; i < n;) //ta peta bedzie dzialac az znajdzie n liczb pierwszych
    {
        if (isPrimeNumber(l))
        {
            i++;
            std::cout << l << std::endl;
        }
        l++;
    }
}
