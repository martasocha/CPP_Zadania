#include <iostream>
void extractStringsFromString(std::string str, char separator)
{
    int counter = 0;
    std::string temp;
    for (int i = 0; i < str.size(); ++i)
    {
        temp += str[i];

        if (str[i] == separator)
        {
            counter++;
            std::cout << counter << " wydzielony string to: " << temp << std::endl;
            temp.clear();
        }
        if (i == (str.size() - 1) && str[str.size() - 1] != separator)
        {
            counter++;
            std::cout << counter << " wydzielony string to: " << temp << std::endl;
        }
    }
}
int main()
{
    std::string sentence = "Nic dwa razy siê nie zdarza";
    std::cout << "Test:" << std::endl;
    extractStringsFromString(sentence, ' ');
    std::cout << "Test:" << std::endl;
    extractStringsFromString("Jamniczek, który siê zapl¹ta³ w rêczniczek", ' ');
}