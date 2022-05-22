// Zad 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Zad5_1solution.h"


int main()
{
    int const size = 20;
    int num[size] = {};
    int n = 0;
    int m = 0;

    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 10 + 1;
        std::cout << num[i] << "; ";
    }
    std::cout << std::endl;

   taskA(num, size);
   taskB(num, size);
   taskC(num, size);
   taskD(num, size);
   taskE(num, size);
   taskF(num, size);
   taskG(num, size);
   taskH(num, size);
   taskI(num, size);
   taskJ(num, size);


}

