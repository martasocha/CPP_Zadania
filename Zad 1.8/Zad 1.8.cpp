#include <iostream>
#include <string>

void maxText(std::string text, std::string text2)
{
    int textIndex = 0;
    int j = 0;
    int k = 0;
    std::string max = {'0'};
    //char tab[5] = {};

   for (int j = 0; j < text2.length(); ++j)
   {
        for (int i = 0; i < text.length(); ++i)
        {
            if (text[i] == text2[j])
            {
                std::cout << text2[j] << " ";
                j++;
            }

        }
        std::cout << std::endl;
   }
}

int main()
{
    std::string text = {};
    std::string text2 = {};
    std::cout << "Podaj tekst: ";
    std::cin >> text;
    std::cout << "Podaj drugi tekst: ";
    std::cin >> text2;
    std::cout << "Wypisz wspolne lancuchy: ";
    maxText(text, text2);
}

