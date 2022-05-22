//Zad. 4.5

#include <iostream>
#include <string>

bool checkWord(std::string word)
{
    std::string number = {};

    if (word.length() == 14)
    {
        if (word[0] >= 97 && word[0] <= 122)
        {
            if (word.at(4) == 'w')
            {
                if (word.at(6) == 'o' && word.at(7) == 'p')
                {
                    if (word.at(8) == 32)
                    {
                        for (int i = 9; i <= 14; i++)
                        {
                            if (word.at(i) == 48 || word.at(i) == 49)
                            {
                                return 0;
                            }
                        }
                        return 1;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}


int main()
{
    std::cout << "a!*.w*op 34531: " << checkWord("a!*.w*op 34531") << std::endl;
    std::cout << "Aww * op 34531: " << checkWord("a!*.w*op 30001") << std::endl;
    //std::cout << "wodawoop 22222: " << checkWord("wodawoop 22222") << std::endl;

}