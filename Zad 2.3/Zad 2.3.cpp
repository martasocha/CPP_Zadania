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


int main()
{
    short int a = 102;
    short int b = 123;

    int a1 = 2147483;
    int b1 = 3276742;

    long long int a2 = 92233720368547758;
    long long int b2 = 34433720368547758;

    double a3 = 102.342;
    double b3 = 123.234;


    std::cout << add1(a, b) << std::endl;
    std::cout << add2(a1, b1) << std::endl;
    std::cout << add3(a2, b2) << std::endl;
    std::cout << add4(a3, b3) << std::endl;


}
