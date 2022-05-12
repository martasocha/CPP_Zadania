#include <iostream>

int main()
{

	//1 % 2 = 1;
	//2 % 2 = 0;
	//3 % 2 = 1;
	int number = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number % 2)  //operator modulo 2 zwraca 0 albo 1, 0 -false; 1 -true
	{ // if trafi tutaj gdy reszta z dzielenia wynosi 1 - to jest liczba nieparzysta
		std::cout << "Liczba jest nieparzysta";
	}
	else
	{
		std::cout << "Liczba jest parzysta";
	}
}
