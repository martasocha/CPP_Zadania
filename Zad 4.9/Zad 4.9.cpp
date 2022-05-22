// Zad 4.9 Napisz funkcj�, kt�ra b�dzie przyjmowa� tablic� string�w, oraz
//zwraca� pojedynczy string(po scaleniu).Niech dodatkowym
//argumentem b�dzie znak umieszczany pomi�dzy ��czonymi
//stringami.
//

#include <iostream>
#include <string>


std::string mergeString(std::string str[], char c, int arrSize)
{
    std::string mergedString = {};

    for (int i = 0; i < arrSize; ++i)
    {
        if (i != arrSize -1)
        {
            mergedString += str[i] + c;
        }
        else
        {
            mergedString += str[i];
        }
        //std::cout << str[i] << std::endl;
        //std::cout << mergedString << std::endl;
    }
    return mergedString;
}

int main()
{

    //std::string str[3] = {"tata", "mama", "syn"};
    std::string str[4] = { "tata", "mama", "syn", "corka"};

    int arrSize = 0;
    arrSize = sizeof(str) / sizeof(str[0]);
    std::cout << "Rozmiar tablicy stringow wynosi: " << arrSize << std::endl;

    std::cout << mergeString(str, '\n', arrSize);
    std::cout << std::endl;


    //std::cout << mergeString(str, '+');
    //std::cout << std::endl;
    //std::cout << mergeString(str2, '+', arrSize2);


}

