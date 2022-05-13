#include <iostream>
#include <time.h>

int main()
{
    float num = 0.0f;
    srand(time(NULL));
    do
    {
        num = std::rand()/10000.0f;
        std::cout << num << std::endl;

    } while (num >= 0.03);
}
