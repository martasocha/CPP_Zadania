#include <iostream>
#include <algorithm>

void revertCharArray(char tab[][3])
{
    char findings[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            findings[i][j] = tab[3 - i - 1][3 - j - 1];
            std::cout << findings[i][j];
        }
        std::cout << std::endl;
    }

}

void revertCharArrayv2(char tab[][3])
{
    int rowMiddle = ceil(3 / 2.0);
    for (int i = 0; i < rowMiddle; ++i)
    {
        if (i = rowMiddle - 1)
        {
            for (int j = 0; j < rowMiddle; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }
        }
        else
        {
            for (int j = 0; j < 3; ++j)
            {
                std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << tab[i][j];
        }
        std::cout << std::endl;
    }

}

int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };

    revertCharArrayv2(tab);
}