//Zad. 4.3 Sprawd� czy s�owo ma wi�cej ni� 5 liter i ko�czy si� liter� �r�. (napisz funkcj�)

#include <iostream>
#include <string>

bool checkWord(std::string word)
{
    char lastChar = '0';
    lastChar = word.back();

    if (word.size() > 5)
    {
        if (lastChar == 'r')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}


int main()
{
    std::cout << checkWord("kurs") << std::endl;
    std::cout << checkWord("kursrr");
}
