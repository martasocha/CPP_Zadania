// Zad 5.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void drawFigureA(int l)
{
    for (int i = 0; i < l; i++)
    {
        //rysowanie w danym wierszu
        for (int j = 0; j <= i; j++) // licz wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
        //bedzie narysowane tyle gwiazdek jaki jest numer wiersza
        {
            std::cout << '*';
        }
        std::cout << std::endl; // po narysowaniu w danej linii/wierszu przechodzimy do nastêpnego wiersza
    }
}

void drawFigureB(int l)
{
    for (int i = 0; i < l; i++)
    {
        //rysowanie w danym wierszu
        for (int j = 0; j < i; j++)
        {
            std::cout << ' ';

            if (j == i)
            {
                std::cout << '*';
            }
        }
        std::cout << std::endl;
    }
}

void drawFigureB1(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++) // licz wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i 
        // j < i nie wykona warunku
        {

            std::cout << ' ';
        }
        std::cout << "*" << std::endl;
    }
}

void drawFigureB2(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {

            if (j < i)
            {
                std::cout << ' ';
            }
            else if (i == j)
            {
                std::cout << '*';
            }
            else
            {
                continue;
            }

        }
        std::cout << std::endl;
    }

}


void drawFigureC(int l)
{
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            //rysujemy gwiazdki w pierwszym i ostatnim wierszu i w pierwszej i ostatniej kolumnie
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}



void drawFigureD(int l)
{
    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < l; j++)
        {
            std::cout << ' ';

            if (i == j || i == l - j - 1)
            {
                std::cout << '*';
            }

        }
        std::cout << std::endl;
    }
}

//void drawC(int h) 
//{
//    for (int i = 0; i <= h; i++) {
//        for (int j = 0; j <= h; j++) {
//            if (j == i || j == h - i) {
//                std::cout << '*';
//            }
//            else {
//                std::cout << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//}
//
//
//void drawC1(int h) {
//    for (int i = 0; i <= h; i++) {
//        for (int j = 0; j <= h; j++) {
//            if (j == i || j == h - i) {
//                std::cout << '*';
//            }
//            else {
//                std::cout << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//}


//void drawD(int h) {
//    for (int i = 0; i <= h; i++) {
//        for (int j = h; j >= 0; j--) {
//            if (isBeginnigOrEnd(i, h)) {
//                std::cout << '*';
//            }
//            else {
//                if (isBeginnigOrEnd(j, h)) {
//                    std::cout << '*';
//                }
//                else {
//                    std::cout << ' ';
//                }
//            }
//        }
//        std::cout << std::endl;
//    }
//}

int main()
{
    //drawFigureA(10);
    //drawFigureB2(10);
    drawFigureD(10);
}

