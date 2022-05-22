#include <iostream>
//
//void array1to100 (double num[10][10], int n, int size)
//{
//
//    for (int i = 0; i < size; i++)
//    {
//        for (int k = 0; k < size; k++)
//        {
//            num[i][k] += n++;
//            std::cout << num[i][k] << "; ";
//        }
//        std::cout << std::endl;
//    }
//
//}


int main()
{
    int const size = 10;
    double num[size][size] = {};


    int n = 1;

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            num[i][k] += n++;
            std::cout << num[i][k] << "; ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            num[i][k] = rand();

            std::cout << num[i][k] << "; ";
        }
        std::cout << std::endl;
    }






    
}