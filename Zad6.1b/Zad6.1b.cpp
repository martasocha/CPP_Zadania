// Zad6.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "You have entered " << argc
		<< " arguments:" << "\n";

	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << "\n";

	int sum = 0;
	//zakladamy ze uzytkownik podaje tylko 1 cyfre w argumencie
	//liczba argumentow jest dowolna
	for (int i = 1; i < argc; ++i)
	{
		//argv[i] -> i-ty argument uzytkownika jest to tablica char
		//argv[i][0] -> dostajemy sie do pierwszego znaku  i-tego argumentu uzytk
		std::cout << argv[i][0]-'0' << "; "; //static_cast uzywamy na konkretnym typie, nie na tablicy
		sum += argv[i][0] - '0';
	}

	std::cout << sum;

}