#include <iostream>
#include <string>

bool palindrom(std::string str)
{
    int dl = str.size(); // zwracanie dlugosci - to samo co length

    for (int i = 0; i < dl / 2; i++) // przechodzimy po kolejnych literach stringa od poczatku do polowy
    {
        //if (str.at(i) != str.at(dl - i - 1)) // metoda .at() to samo co []; sprawdzamy czy litery sa rozne
        if (str[i] != str[dl - i -1])
        { //jesli w ktoryms momencie litery sa rozne to jest palindrom i zwracamy false
            return 0;
            
        }
    }
    return 1;
}

//#include <iostream>
//bool Palindrom(std::string word)
//{
//    int i = 0;
//    int j = word.size() - 1;    for (; i < j; i++, j--)
//    {
//        if (word[i] != word[j])
//            return false;
//    }
//    return true;
//}
//


int main()
{
    std::string tekst = {};
    std::cout << "Podaj tekst: ";
    std::cin >> tekst;

    std::cout << palindrom(tekst);
}
