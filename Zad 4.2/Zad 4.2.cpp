// Napisz funkcjê, która bêdzie sk³adaæ tablicê typu char 5x5 w Stringa (wiersz po wierszu).

#include <iostream>
#include <string>

std::string convert1DCharArrayToString(char cTab[], int a)
{
    std::string str;

    for (int i = 0; i < a; ++i)
    {
        str += cTab[i];
    }
    return str;

}

//grzy przekazujemy tablice dwuwymiarowa musimy podac drugi wymiar
std::string convert2DCharArrayToString(char cTab[][5], int a, int b)
{
    std::string str;

    for (int i = 0; i < a; ++i)
    {
        for (int k = 0; k < b; k++)
        {
            str += cTab[i][k];
        }
        str += '\n';
    }
    return str;
}

std::string convert2DCharArrayToString(char cTab[][7], int a, int b)
{
    std::string str;

    for (int i = 0; i < a; ++i)
    {
        for (int k = 0; k < b; k++)
        {
            str += cTab[i][k];
        }
        str += '\n';
    }
    return str;
}

int main()
{
    char cTab1D[10] = "123456789"; //zmieszcze 9 znakow bo konczy sie zerem
    std::cout << convert1DCharArrayToString(cTab1D, 10);
    std::cout << std::endl;
    char cTab2D[5][5] = { "abcd", "efgh", "ijkl", "mnop" };
    std::cout << convert2DCharArrayToString(cTab2D,5,5);

    std::cout << std::endl;
    char cTab2D_2[4][7] = { "abcdaa", "efghaa", "ijklaa", "mnopaa" };
    std::cout << convert2DCharArrayToString(cTab2D_2,4,7);
}

