#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits>

void howMany(float sum)
{
    int const size = 15;
    float nom[size] = {500.0f,200.0f,100.0f,50.0f,20.0f,10.0f,5.0f,2.0f,1.0f,0.5f,0.2f,0.1f,0.05f,0.02f,0.01f};
    float tab[size] = {};
    int n = 0;

    for (int i = 0; i < size; i++)
    {
        tab[i] = 0;
    }
    int i = 0;
    
    while (sum >= 0.01)
    {
        if (sum - nom[i] > 0.00)
        {
            tab[i] += static_cast<int>(std::floor(sum / nom[i]));
            std::cout << nom[i] << ": " << tab[i] << " ";
            sum -= (nom[i]*tab[i]);
            sum = ceil(sum * 100.0) / 100.0;
            std::cout << "sum =" << sum << std::endl;
            i++;
        }
        else
        {
            tab[i] = 0;
            std::cout << nom[i] << ": " << tab[i] << " ";
            sum = ceil(sum * 100.0) / 100.0;
            std::cout << "sum =" << sum << std::endl;
            i++;
        }
    } 
}
int main()
{
    float sum = 0;
    std::cout << "Podaj kwote :";
    std::cin >> sum;
    howMany(sum);
}


