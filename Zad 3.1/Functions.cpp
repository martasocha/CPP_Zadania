#include "Functions.h"
#include <iostream>
#include <math.h>

void printDoubleNumber(double d) //123.456
{
    if (d < 0.0)
    {
        std::cout << "-";
        d *= -1.0; //przemnazamy razy -1.0 zeby miec wartosc dodatnia
    }

    //123
    int a = static_cast<int>(d); // czesc calowita jest wyciagnieta z doubla
    //.456
    double b = d - a; // czesc niecalkowita, po kropce
    int n1 = 1; //liczba cyfr czesci calowitej
    int n2 = 1; // liczba cyfr czêsci po przecinku/kropce

    //123
    while (a > 9) //tu zliczamy ile jest cyfr w czesci calowitej, robimy to bo nie jestesmy w stanie ich wyswietlac od lewej do prawej
        //sprawdzamy czy wartosc jest dwucyfrowa
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d); //odswiezamy ta wartosc

    for (int i = 0; i < n1; i++)
    {
        //tutaj wyciagamy kolejne cyfry z czesci calowitej, od lewej do prawej
        // 123
        // 123/100 ->1
        // 23/10 ->2
        // 3/1 ->3
        int p = static_cast<int>(pow(10, n1 - i - 1)); //rzutujemy bo pow zwraca double
        int c = (a / p);
        a -= c * p;
        std::cout << c;
    }

    std::cout << ".";

    //.456*10 = 4.56 ->4
    // (4.56-4) *10 = 5.6 ->5
    do
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << static_cast<int>(b);
        b -= c;

    } while (b > 0.0);

}
