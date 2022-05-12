#include <iostream>

int main()
{
    int const size = 5;
    int tab[size][size] = {};
    int number = 0;


    //int tab[size][size] = { {1,12,13,14,15},{22,23,24,25,26},{1,2,3,4,5),{6,7,8,9,10}};

    for (int i = 0; i < size; ++i)
    {
        for (int k = 0; k < size; k++)
        {
            std::cout << "Podaj liczbe: ";
            std::cin >> number;
            tab[i][k] = number;
        }
    }
    
}

