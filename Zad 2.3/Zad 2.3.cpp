#include <iostream>

short int add1(short int a, short int b)
{
    return a + b;
}

int add2(short int a, short int b)
{
    return a + b;
}

long long int add3(short int a, short int b)
{
    return a + b;
}

double add4(short int a, short int b)
{
    return a + b;
}

short int add5(short int a, short int b)
{
    return a + b;
}

int main()
{
    short int a = 102;
    short int b = 123;

    //int a = 2147483;
    //int b = 3276742;

    //long long int a = 92233720368547758;
    //long long int b =/ 34433720368547758;

    //double a = 102.342;
    //double b = 123.234;

    std::cout << add1(a, b) << std::endl;
    std::cout << add2(a, b) << std::endl;
    std::cout << add3(a, b) << std::endl;
    std::cout << add4(a, b) << std::endl;
    std::cout << add5(a, b) << std::endl;


}
