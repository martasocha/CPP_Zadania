#include <iostream>

void transponse3x3Array(int tab[][3])
{
    int res[3][3]; // result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = tab[j][i]; // zamieniamy wiersze z kolumnami
            std::cout << res[i][j] << "; ";
        }
        std::cout << '\n';
    }
}

int main()
{
    int tab[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    transponse3x3Array(tab);

}

