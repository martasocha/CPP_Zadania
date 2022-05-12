#include <iostream>

int main()
{

    int a = 10;
    int b = 12;
    int c = 11;

    int max = 0;

    if (a > b && a > c)
    {
        std::cout << a << std::endl;
    }
    else if (b > a && b > c)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << c << std::endl;
    }

    int l = 0;
    std::cin >> l;
    std::cout << (l > 5) ? 0 : 1; //Operator trojargumentowy, pryklad uzycia
}