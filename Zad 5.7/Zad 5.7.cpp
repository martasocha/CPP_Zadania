// Zad 5.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void drawChessboards (int h = 8)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++) 
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    std::cout << 'o';
                else
                    std::cout << '#';
            }
            else
                if (j % 2 == 0)
                    std::cout << '#';
                else
                    std::cout << 'o';
        }
        std::cout << std::endl; 
    }
}


void drawBoard2x2(int a = 8){
    for (int i = 0; i < a; i++) {
        for (int m = 0; m < 2; m++)
        {
            for (int j = 0; j < a; j++) {
                for (int k = 0; k < 2; k++)
                {
                    if ((i + j) % 2 == 0) {
                        std::cout << "#";
                    }
                    else {
                        std::cout << "o";
                    }
                }
            }
            std::cout << std::endl;
        }
    }
    }


void drawChessboards2x2(int h = 8)
{
    for (int i = 0; i < h; i++)
    {
        for (int m = 0; m < 2; m++)
        {
            for (int j = 0; j < h; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (i % 2 == 0)
                    {
                        if (j % 2 == 0)
                            std::cout << 'o';
                        else
                            std::cout << '#';

                    }
                    else

                        if (j % 2 == 0)
                            std::cout << '#';
                        else
                            std::cout << 'o';
                }
            }
            std::cout << std::endl;
        }
    }
}



int main()
{
    //    drawChessboards2x2();
    drawBoard2x2();
}

