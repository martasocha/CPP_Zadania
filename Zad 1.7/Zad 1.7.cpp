#include <iostream>
#include <string>

void templateInString(std::string text, std::string template1)
{
    int textIndex = 0;
    int j = 0;
    for (int i = 0; i < text.length(); ++i)
    {
              if (text[i] == template1[j])
              {
                    
                    if (j + 1 == template1.length())
                    {
                        j = 0;
                        textIndex = i - (template1.length() - 1);
                        std::cout << "Wzorzec wystapil od indeksu: " << textIndex << std::endl;
                    }
                    else
                    {
                        j++;
                    }
              }
    }
}

int main()
{
    std::string text = {};
    std::string template1 = {};
    std::cout << "Podaj tekst: ";
    std::cin >> text;
    std::cout << "Podaj wzorzec: ";
    std::cin >> template1;
    templateInString(text, template1);

}

