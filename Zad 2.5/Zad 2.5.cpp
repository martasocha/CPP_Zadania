#include <iostream>
#include <cmath>

float roundFunction(float number, int n)
{
    float num = 0;

    int a = 0;
    a = pow(10, n);
    num = round(number * a) / a; // num = 12454/1000 = 12.453
    return num;
}

int main()
{
    float number = 12.4543645;
    int n = 0;
    n = 3;
    std::cout << roundFunction(number,n);
}

